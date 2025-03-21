#include "queue.h"
#include <stdio.h>

void initQueue(Queue* q) {
    q->list.head = NULL;
    q->nomorAntrian = 0;
}

void enqueue(Queue* q) {
    q->nomorAntrian++;
    insertLast(&q->list, q->nomorAntrian);
    printf("Nomor antrian %d telah ditambahkan.\n", q->nomorAntrian);
}

void dequeue(Queue* q) {
    if (!isQueueEmpty(q)) {
        printf("Nomor antrian %d sedang diproses.\n", q->list.head->info);
        deleteFirst(&q->list);
    } else {
        printf("Antrian kosong, tidak ada yang diproses.\n");
    }
}

void displayQueue(Queue* q) {
    printf("Daftar antrian saat ini: ");
    displayList(&q->list);
}

int isQueueEmpty(Queue* q) {
    return isEmpty(&q->list);
}

void clearQueue(Queue* q) {
    deleteAll(&q->list);
}

void displayMenu() {
    printf("\nMenu:\n");
    printf("1. Ambil antrian\n");
    printf("2. Proses antrian\n");
    printf("3. Cetak antrian\n");
    printf("4. Keluar\n");
    printf("Pilih menu: ");
}
