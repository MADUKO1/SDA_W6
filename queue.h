#ifndef QUEUE_H
#define QUEUE_H

#include "linear_list.h"

typedef struct {
    List list;
    int nomorAntrian;
} Queue;

void initQueue(Queue* q);
void enqueue(Queue* q);
void dequeue(Queue* q);
void displayQueue(Queue* q);
int isQueueEmpty(Queue* q);
void clearQueue(Queue* q);
void displayMenu();

#endif