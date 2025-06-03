#include <iostream>
using namespace std;

const int MAXSTACK = 10;
typedef int itemstack;

typedef struct{
  itemstack Item[MAXSTACK];
  int count;
} Stack;

void initializeStack(Stack *S){
    S->count = 0;
}

int Full(Stack *S){
    return (S->count == MAXSTACK);
}
int Empty(Stack *S){
    return (S->count == 0);
}

void Pop(Stack *S, itemstack *x){
    if (Empty(S))
        cout << "Gudang masih kosong!" << endl;
    else{
        --(S->count);
        *x = S->Item[S->count];
        cout << "Barang dengan ID " << *x << " berhasil diambil dari gudang" << endl;
    }
  }

  void Push(itemstack x, Stack *S){
    if (Full(S))
        cout << "Gudang penuh! Barang tidak dapat disimpan!" << endl;
    else{
        S->Item[S->count] = x;
        cout << "Barang dengan ID " << x << " berhasil ditambahkan ke gudang" << endl;
        ++(S->count);
    }
  }

int main(){
    Stack Gudang;
    itemstack *B = Gudang.Item;

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