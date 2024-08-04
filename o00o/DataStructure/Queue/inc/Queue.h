
#ifndef __QUEUE__H__
#define __QUEUE__H__

#include <stdio.h>

#define MAX_QUEUE_SIZE				10
#define QUEUE_FULL					1
#define QUEUE_EMPTY					2
#define QUEUE_NOT_FULL				3
#define QUEUE_NOT_EMPTY				4

struct Queue {
	int queue[MAX_QUEUE_SIZE];
	int front, rear;
};

extern struct Queue queue;

void InitQueue(struct Queue *q);
void EnQueue(struct Queue *q, int val);
int DeQueue(struct Queue *q);
int IsFullQueue(struct Queue *q);
int IsEmptyQueue(struct Queue *q);

#endif