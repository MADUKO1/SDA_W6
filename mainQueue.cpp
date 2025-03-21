#include "queue.h"
#include <stdio.h>

int main() {
    Queue queue;
    initQueue(&queue);
    int pilihan;

    do {
        displayMenu();
        scanf("%d", &pilihan);
        
        switch (pilihan) {
            case 1:
                enqueue(&queue);
                break;
            
            case 2:
                dequeue(&queue);
                break;
            
            case 3:
                displayQueue(&queue);
                break;
            
            case 4:
                printf("Terima kasih!\n");
                clearQueue(&queue);
                break;
            
            default:
                printf("Pilihan tidak valid, silakan coba lagi.\n");
        }
    } while (pilihan != 4);

    return 0;
}