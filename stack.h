#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>
#include "linear_list.h"

typedef List Stack;


void createStack(Stack* stack);
void pushStack(Stack* stack, int nilai);
void popStack(Stack* stack);
int topStack(Stack* stack);
int isStackEmpty(Stack* stack);
void displayStack(Stack* stack);
void clearStack(Stack* stack);
void convertToBinary(int decimal);

#endif
