#include "Stack-Arraybased.h"
#include "Types.h"

 void creat_stack(Stack *ps)
 {

 ps->top =0;

 }
//====================================================================================================
 int push(stackEntry e, Stack *ps)
 {
 if( ps->top == MaxStack){
    return 0 ;
     }
 else{
    ps-> entry[ps->top]=e;
    ps->top ++;
    return 1;
     }
 }
//====================================================================================================
 int pop(stackEntry *pe, Stack *ps)
 {
  if(ps->top==0)
  {
    return 0;
  }
  else{

       *pe = ps-> entry[-- ps->top];
        return 1;
      }
 }
//====================================================================================================
 int Stack_full(Stack *ps)
 {
  if( ps->top== MaxStack){
    return 1;
  }
    else
    return 0;
 }

//====================================================================================================

 int Stack_Empty(Stack *ps)
 {

 return !ps->top;

 }
//====================================================================================================
 void Stack_Top(stackEntry *pe,Stack *ps){
  *pe = ps->entry[ps->top -1];
 }
//====================================================================================================
 int Stack_size(Stack *ps){

 return ps->top;
 }
//====================================================================================================
 void Traverse_Stack(Stack *ps , void (*pf)(stackEntry))
 {
     int i;
   for (i=ps->top;i>0;i--)
    {
      (*pf)(ps->entry[i-1]);
    }
 }
