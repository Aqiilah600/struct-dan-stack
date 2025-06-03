#include <iostream>
using namespace std;

const int MAXSTACK = 10;
typedef int itemstack;

typedef struct{
  itemstack Item[MAXSTACK];
  int count;
} Stack;