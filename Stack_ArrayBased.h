#ifndef STACK-ARRAYBASED_H_INCLUDED
#define STACK-ARRAYBASED_H_INCLUDED
#define stackEntry int
#define  MaxStack 100




typedef struct Stack{

 int top;
 stackEntry entry[MaxStack];

}Stack;

//=============================================================================================

void creat_stack(Stack *ps);
int push(stackEntry e,Stack *ps);
int pop(stackEntry *pe,Stack *ps);
int Stack_full(Stack *ps);
int Stack_Empty(Stack *ps);
void Stack_Top(stackEntry *pe,Stack *ps);
void Clear_Stack(Stack *ps);
void Traverse_Stack(Stack *ps, void (*pf)(stackEntry));
int Stack_size(Stack *ps);


#endif // STACK-ARRAYBASED_H_INCLUDED
