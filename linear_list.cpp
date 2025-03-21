#include "Linear_List.h"

void createNode(Node** p, int nilai) {
    *p = (Node*)malloc(sizeof(Node));
    if (*p != NULL) {
        (*p)->info = nilai;
        (*p)->next = NULL;
    }
}

void insertFirst(List* list, int nilai) {
    Node* newNode;
    createNode(&newNode, nilai);
    if (newNode != NULL) {
        newNode->next = list->head;
        list->head = newNode;
    }
}

void insertLast(List* list, int nilai) {
    Node* newNode;
    createNode(&newNode, nilai);
    if (newNode != NULL) {
        if (list->head == NULL) {
            list->head = newNode;
        } else {
            Node* temp = list->head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
}

void insertAfter(List* list, int afterValue, int nilai) {
    Node* temp = list->head;
    while (temp != NULL && temp->info != afterValue) {
        temp = temp->next;
    }
    if (temp != NULL) {
        Node* newNode;
        createNode(&newNode, nilai);
        if (newNode != NULL) {
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
}

void deleteFirst(List* list) {
    if (!isEmpty(list)) {
        Node* temp = list->head;
        list->head = list->head->next;
        free(temp);
    }
}

void deleteLast(List* list) {
    if (!isEmpty(list)) {
        Node* temp = list->head;
        if (temp->next == NULL) {
            free(temp);
            list->head = NULL;
        } else {
            while (temp->next->next != NULL) {
                temp = temp->next;
            }
            free(temp->next);
            temp->next = NULL;
        }
    }
}

void deleteNode(List* list, int nilai) {
    if (!isEmpty(list)) {
        if (list->head->info == nilai) {
            deleteFirst(list);
        } else {
            Node* temp = list->head;
            while (temp->next != NULL && temp->next->info != nilai) {
                temp = temp->next;
            }
            if (temp->next != NULL) {
                Node* toDelete = temp->next;
                temp->next = temp->next->next;
                free(toDelete);
            }
        }
    }
}

void deleteAll(List* list) {
    while (!isEmpty(list)) {
        deleteFirst(list);
    }
}

void displayList(List* list) {
    Node* temp = list->head;
    while (temp != NULL) {
        printf("%d -> ", temp->info);
        temp = temp->next;
    }
    printf("NULL\n");
}

int isEmpty(List* list) {
    return list->head == NULL;
}
