
#include "..\inc\Queue.h"

struct Queue queue;

void InitQueue(struct Queue *q)
{
	q->front = q->rear = 0;
}

int IsEmptyQueue(struct Queue *q)
{
	if(q->front == q->rear) return QUEUE_EMPTY;
	else return QUEUE_NOT_FULL;
}

int IsFullQueue(struct Queue *q)
{
	if(q->front == ((q->rear + 1) % MAX_QUEUE_SIZE)) return QUEUE_FULL;
	else return QUEUE_NOT_FULL;
}

void EnQueue(struct Queue *q, int val)
{
	if(IsFullQueue(q) == QUEUE_FULL) {
		printf("Queue가 꽉 차 있음...\n");	
		return;
	}
	else {
		q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
		q->queue[q->rear] = val;
	}
}

int DeQueue(struct Queue *q)
{
	if(IsEmptyQueue(q) == QUEUE_EMPTY){
		printf("Queue가 비어있음...\n");	
		return -1;
	}
	else {
		q->front = (q->front + 1) % MAX_QUEUE_SIZE;
		return q->queue[q->front];
	}
}