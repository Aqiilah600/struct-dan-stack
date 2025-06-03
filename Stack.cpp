#include <iostream>
using namespace std;

const int MAXSTACK = 10;
typedef int itemstack;

typedef struct{
  itemstack Item[MAXSTACK];
  int count;
} Stack;

void initializeStack(Stack *S){
    S->Count = 0;
}

int Full(Stack *S){
    return (S->Count == MAXSATCK);
}

int Empty(Stack *S){
    return (S->Count == 0);
}