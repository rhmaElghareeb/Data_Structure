#ifndef LINKED-BASED-STACK_H_INCLUDED
#define LINKED-BASED-STACK_H_INCLUDED
#define stackEntry int
#define  MaxStack 100





typedef struct stacknode{
  stackEntry entry;
  struct stacknode *next;

}StackNode;

typedef struct STACK{

 StackNode *top;
 int Size;

}STACK;

void CreatStack(STACK *PS);
void PUSH(stackEntry e,STACK *ps );
void POP(stackEntry *pe,STACK *ps );
void ClearStack(STACK *ps);
void StackTop(stackEntry *pe , STACK *ps)
void TraverseStack(STACK *ps ,void (*pf)(stackEntry));
int StackSize(STACK *ps);
int StackFull(STACK *ps);
int StackEmpty(STACK *ps);

#endif // LINKED-BASED-STACK_H_INCLUDED
