#include <stdio.h>
#include <stdlib.h>
#include "Queue_Array_based.h"



void creat_Queue( Queue *pq)
{
  pq ->Front =0;
  pq ->rear =-1;
  pq ->Size=0;
}


void Enqueue(QueueEntry e, Queue *pq)
{

  pq->rear=(pq -> rear +1) % MaxQueue;
  pq->Entry[pq->rear]=e;
  (pq->Size) ++;
}

void Dequeue(QueueEntry *pe, Queue *pq)
{
    *pe = pq->Entry[pq->Front];
     pq->Front= (pq->Front +1) % MaxQueue;
     (pq->Size) --;
}


void Traverse_Queue(Queue *pq , void (*pf)(QueueEntry))
{
   int pos,i;
   pos = pq->Front;

   for(i=0;i<pq->Size;i++)
    {
    (*pf)(pq->Entry[pos]);
     pos=(pos +1) % MaxQueue;

    }

}

void Clear_queue( Queue * pq)
{
pq->Front=0;
pq->rear=-1;
pq->Size=0;

}

int Queue_Empty(Queue *pq)
{
    return (pq->Size == 0);
}

int Queue_Full(Queue *pq)
{
    return (pq->Size == MaxQueue);
}


int Queue_size(Queue *pq)
{
   return pq->Size;
}









