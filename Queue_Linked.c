#include <stdio.h>
#include <stdlib.h>
#include "Queue_Linked_Based.h"


void CreatQueue( QUEUE *pq)
{
  pq->FRONT =NULL;
  pq->Rear =NULL;
  pq->SIZE=0;

}
void ENQUEUE( QueueEntry e, QUEUE *pq)
{
 QueueNode *pn = (QueueNode *) malloc (sizeof(QueueNode));
 pn->next =NULL;
 pn->ENTRY=e;

 if( ! pq->Rear)
    {
        pq->FRONT=pn;

    }
 else{
    pq->Rear->next=pn;
     }

    pq->Rear=pn;
    pq->SIZE ++;
}
void DEQUEU(QueueEntry *pe, QUEUE  *pq )
{
  QueueNode *pn= pq->FRONT;
 *pe=pq->FRONT->ENTRY;
  pq->FRONT=pn->next;
  free(pn);
  if( ! pq->FRONT)
    pq->Rear=NULL;

  pq->SIZE --;

}
void ClearQueue( QUEUE  *pq)
{

 while (pq->FRONT)
    {
    pq->Rear = pq->FRONT->next;
    free(pq->FRONT);
    pq->FRONT=pq->Rear;

    }
  pq->SIZE =0;

}
void TraverseQueue(QUEUE  *pq , void (*pf)(QueueEntry))
{
QueueNode *pn;
 for(pn =pq->FRONT;pn;pn=pn->next)
    {
      (*pf)(pn->ENTRY);
    }


}
int QueueEmpty ( QUEUE  *pq )
{
 return !pq->FRONT;
}
int QueueFull(QUEUE  *pq )
{
  return 0;
}
int Queuesize( QUEUE  *pq )
{
  return pq->SIZE;
}
