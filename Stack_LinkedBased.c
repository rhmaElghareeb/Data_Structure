#include <stdio.h>
#include <stdlib.h>
#include "Linked-based-stack.h"


void CreatStack(STACK *ps)
{
 ps->top = NULL ;
 ps->Size =0 ;

}
void PUSH(stackEntry e ,STACK *ps){

StackNode *pn = (StackNode *) malloc (sizeof(StackNode));
 pn ->entry = e;
 pn->next = ps -> top;
 ps -> top = pn;
 (ps-> Size ) ++;

}
 void POP (stackEntry *pe , STACK *ps){
  StackNode *pn;
  *pe = ps-> top-> entry;
  pn= ps -> top;
  ps -> top =ps->top->next;
  free(pn);
  (ps->Size ) --;

 }
void ClearStack( STACK *ps){
 StackNode *pn,*qn;

 pn= ps->top;
 qn= ps -> top;
  while ( pn ){
     pn = pn ->next;
     free(qn);
     qn=pn;

  }
  ps-> top =NULL;
  ps -> Size= 0;
}


void TraverseStack (STACK *ps,void (*pf)(stackEntry))
{
   StackNode *pn= ps -> top;
   while (pn)
    {
      (*pf)(pn ->entry);
       pn = pn-> next;
    }
}


int StackFull( STACK *ps)
{
 return 0;

}


int StackEmpty( STACK *ps)
{
 return ((ps-> Size)==0);

}


int StackSize(STACK *ps)
{
 return ps->Size;

}
 void StackTop(stackEntry *pe , STACK *ps)
 {

 *pe= *(ps-> top ->entry);

 }
