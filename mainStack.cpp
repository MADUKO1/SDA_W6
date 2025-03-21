#include "stack.h"

int main() {
    int decimal;
    Stack stack;
    createStack(&stack); 


    printf("Test Stack\n\n");
    printf("Menambahkan elemen ke stack\n");
    pushStack(&stack, 5);
    pushStack(&stack, 10);
    pushStack(&stack, 15);

    printf("Stack setelah push: ");
    displayStack(&stack); 

    printf("Elemen teratas: %d\n", topStack(&stack)); 

    printf("Stack sebelum pop: ");
    displayStack(&stack);

    popStack(&stack); 

    printf("Stack setelah pop: ");
    displayStack(&stack);

    clearStack(&stack); 

    printf("Stack setelah clear: ");
    displayStack(&stack);



    printf("\n\nKonversi desimal ke biner\n");
    printf("Masukkan bilangan desimal: ");
    scanf("%d", &decimal);

    if (decimal < 0) {
        printf("Masukkan bilangan non-negatif!\n");
    } else {
        convertToBinary(decimal);
    }


    return 0;
}
