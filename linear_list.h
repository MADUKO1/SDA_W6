    #ifndef Linear_LIst_H
    #define Linear_List_H

    #include <stdio.h>
    #include <stdlib.h>

    typedef struct Node {
        int info;
        struct Node* next;
    } Node;

    typedef struct {
        Node* head;
    } List;

    void createNode(Node** p, int nilai);
    void insertFirst(List* list, int nilai);
    void insertLast(List* list, int nilai);
    void insertAfter(List* list, int afterValue, int nilai);
    void deleteFirst(List* list);
    void deleteLast(List* list);
    void deleteNode(List* list, int nilai);
    void deleteAll(List* list);
    void displayList(List* list);
    int isEmpty(List* list);

    #endif
