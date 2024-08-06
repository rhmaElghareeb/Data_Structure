#ifndef QUEUE_LINKED_BASED_H_INCLUDED
#define QUEUE_LINKED_BASED_H_INCLUDED
#define QueueEntry int

 typedef struct Queuenode{

     QueueEntry ENTRY;
     Queuenode *next;

 }QueueNode;


 typedef struct QUEUE
 {
  QueueNode *FRONT;
  QueueNode *Rear;
  int SIZE;
 }QUEUE;




void CreatQueue( QUEUE *pq);
void ENQUEUE( QueueEntry e, QUEUE *pq);
void DEQUEU(QueueEntry *pe, QUEUE  *pq );
void ClearQueue( QUEUE  *pq);
void TraverseQueue(QUEUE  *pq , void (*pf)(QueueEntry));
int QueueEmpty ( QUEUE  *pq );
int QueueFull(QUEUE  *pq );
int Queuesize( QUEUE  *pq );

#endif // QUEUE_LINKED_BASED_H_INCLUDED
