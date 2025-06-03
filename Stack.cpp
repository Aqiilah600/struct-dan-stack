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

int main(){
    Stack Gudang;
    itemstack *B = Gudang.Barang;

    initializeStack(&Gudang);

    Pop(&Gudang, B);
    Push(35, &Gudang);
    
    Push(56, &Gudang);
    Push(13, &Gudang);
    Push(12, &Gudang);
    Pop(&Gudang, B);

    Push(76, &Gudang);
    Push(34, &Gudang);
    Push(87, &Gudang);
    Push(99, &Gudang);
    Push(10, &Gudang);
    Push(45, &Gudang);
    Push(54, &Gudang);
    Push(71, &Gudang);
    
    Pop(&Gudang, B);
    Push(32, &Gudang);
}