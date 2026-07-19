// typedef-and-struct-2
// typedef and structs
#include <stdio.h>

// creates a blueprint to store certain information
struct Point
{
  // x and y here are called member variables
  int x; 
  int y;
};

int main (void)
{
  // initializing the struct, Point, to a variable
  struct Point p1;
  p1.x = 5;
  p1.y = 3;
  printf("(%d, %d)\n", p1.x, p1.y);

  struct Point p2;
  p2.x = 10;
  p2.y = 4;
  printf("(%d, %d)\n", p2.x, p2.y);

  // another way to initialize a struct
  struct Point p3 =  {1, 2};
  printf("(%d, %d)\n", p3.x, p3.y);

  // another way to initialize a struct
  // can initialize these members out of order
  struct Point p4 =  {.y = 7, .x = 6};
  printf("(%d, %d)\n", p4.x, p4.y);

  return 0;
}