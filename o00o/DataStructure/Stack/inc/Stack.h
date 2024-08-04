
#ifndef __STACK_H__

#include <stdio.h>
#define MAX_STACK_SIZE				10
#define STACK_FULL					MAX_STACK_SIZE-1
#define STACK_EMPTY					-1
#define TRUE						1
#define FALSE						0

struct Stack {
	int stack[MAX_STACK_SIZE];
	int top;
} ;

extern struct Stack stack;

void InitStack(struct Stack *stack);
void PushStack(struct Stack *stack, int val);
int PopStack(struct Stack *stack);
int IsStackEmpty(struct Stack *st);
int IsStackFull(struct Stack *st);

#endif __STACK_H__