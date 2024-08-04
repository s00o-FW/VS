
/*
	- GitHub Branch Test!!
*/
#include <stdio.h>
#include ".\DataAlignment\inc\DataAlignment.h"
#include ".\DataStructure\Stack\inc\Stack.h"
#include ".\DataStructure\Queue\inc\Queue.h"

int arr[10] = { 9, 5, 4, 1, 3, 6, 2, 8, 7, 10 };

int main(void)
{
	int stIdx,qIdx;
	BubbleSort(arr, sizeof(arr) / sizeof(int));
	
	printf("\n\n");

	InitStack(&stack);

	PushStack(&stack, 10);
	PushStack(&stack, 20);
	PushStack(&stack, 30);
	PushStack(&stack, 40);
	PushStack(&stack, 50);
	PushStack(&stack, 60);
	PushStack(&stack, 70);
	PushStack(&stack, 80);
	PushStack(&stack, 90);
	PushStack(&stack, 100);
	
	for(stIdx=STACK_FULL; stIdx>=0; stIdx--)
		printf("%d ", PopStack(&stack));
	
	printf("\n\n");

	InitQueue(&queue);

	EnQueue(&queue, 1);
	EnQueue(&queue, 2);
	EnQueue(&queue, 3);
	EnQueue(&queue, 4);
	EnQueue(&queue, 5);
	EnQueue(&queue, 6);
	EnQueue(&queue, 7);
	EnQueue(&queue, 8);
	EnQueue(&queue, 9);
//	EnQueue(&queue, 10);

	for(qIdx=0; qIdx<MAX_QUEUE_SIZE; qIdx++)
		printf("Dequeue = %d\n", DeQueue(&queue));

	return 0;
}