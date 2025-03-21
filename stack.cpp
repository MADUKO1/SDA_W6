#include "stack.h"

void createStack(Stack* stack) {
    stack->head = NULL;
}

void pushStack(Stack* stack, int nilai) {
    insertFirst(stack, nilai);
}

void popStack(Stack* stack) {
    if (!isStackEmpty(stack)) {
        deleteFirst(stack);
    } else {
        printf("Stack is empty, cannot pop.\n");
    }
}

int topStack(Stack* stack) {
    if (!isStackEmpty(stack)) {
        return stack->head->info;
    } else {
        printf("Stack is empty.\n");
        return -1;
    }
}

int isStackEmpty(Stack* stack) {
    return isEmpty(stack);
}

void displayStack(Stack* stack) {
    printf("Stack (top to bottom): ");
    displayList(stack);
}

void clearStack(Stack* stack) {
    deleteAll(stack);
}

void convertToBinary(int decimal) {
    Stack stack;
    createStack(&stack);

    if (decimal == 0) {
        printf("Binary: 0\n");
        return;
    }

    
    while (decimal > 0) {
        int remainder = decimal % 2;
        pushStack(&stack, remainder);
        decimal /= 2;
    }

    
    printf("Binary: ");
    while (!isStackEmpty(&stack)) {
        printf("%d", topStack(&stack));
        popStack(&stack);
    }
    printf("\n");

    
    clearStack(&stack);
}
