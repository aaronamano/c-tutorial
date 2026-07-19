// typedef-and-struct-6
// typedef and structs
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
  int data1;
  int data2;
} Info;

int main(void)
{
  Info a;
  a.data1 = 7;
  a.data2 = 10;
  Info b;
  // copies the values from struct a into struct b
  b = a;
  printf("b.data1: %d\n", b.data1); // prints 7
  printf("b.data2: %d\n", b.data2); // prints 10

  return 0;
}