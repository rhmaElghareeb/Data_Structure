#ifndef QUEUE_ARRAY_BASED_H_INCLUDED
#define QUEUE_ARRAY_BASED_H_INCLUDED
#define QueueEntry int
#define MaxQueue 100


typedef struct Queue{

int Front;
int rear;
int Size;

QueueEntry Entry [MaxQueue];
}Queue;



void creat_Queue( Queue *pq);
void Enqueue( QueueEntry e, Queue *pq);
void Dequeue(QueueEntry *pe, Queue *pq );
void Clear_queue( Queue *pq);
void Traverse_Queue(Queue *pq , void (*pf)(QueueEntry));
int Queue_Empty ( Queue *pq );
int Queue_Full(Queue *pq );
int Queue_size( Queue *pq );
#endif // QUEUE_ARRAY_BASED_H_INCLUDED
