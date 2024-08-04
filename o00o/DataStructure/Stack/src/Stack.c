
#include "..\inc\Stack.h"

struct Stack stack;

int IsStackEmpty(struct Stack *st)
{
	if(st->top == STACK_EMPTY) return TRUE;
	else return FALSE;
}

int IsStackFull(struct Stack *st)
{
	if(st->top == STACK_FULL) return TRUE;
	else return FALSE;
}

void InitStack(struct Stack *stack)
{
	int i;
	for(i=0; i<sizeof(stack->stack) / sizeof(struct Stack); i++)
		stack->stack[i] = 0;

	stack->top = -1;
}

void PushStack(struct Stack *stack, int val)
{
	if(IsStackFull(stack)) {
		printf("Stack is Full!!\n");
		return;
	}
	else {
		stack->top++;

		stack->stack[stack->top] = val;
	}
}

int PopStack(struct Stack *stack)
{
	if(IsStackEmpty(stack)) {
		printf("Stack is Empty!!\n");
		return -1;
	}
	else {
		return stack->stack[stack->top--];

	}
}



