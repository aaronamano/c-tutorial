// pointers
#include <stdio.h>

// variables store a memory address
//
//  variables       address (not actual)    value
//-----------------------------------------------
//  a (int)         0x55...                 5
//  b (int)         0x67...                 10
//  p (pointer)     0x57...                 0x67...
//
int main(void){
  int a = 5;
  int b = 10;

  // declares the pointer
  // stores a pointer to an int
  int *p;

  // the & operator means get memory address of b
  // p stores b's memory address so p points to b
  // p can access b
  p = &b;
  printf("p: %p\n", p);
  printf("&b: %p\n", &b);
  printf("&a: %p\n", &a);

  // dereferences the pointer
  // gets the value at the memory address address that p is pointing to
  // p can access b's memory address so we'll print out 10
  printf("*p: %d\n", *p);

  // a = 5 + 10
  // a = 15
  a = a + *p;
  printf("a: %d\n", a);
  
  return 0;
}