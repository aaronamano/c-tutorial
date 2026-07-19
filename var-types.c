// var-types
// variable types and using printf() & scanf()
#include <stdio.h>

int main(void){
  float x = 5.2;
  double y = -9.8;

  printf("x: ");
  scanf("%f", &x);
  // %f is the placeholder for a decimal
  printf("x: %f\n", x);

  printf("y: ");
  scanf("%lf", &y);
  // %lf is the placeholder for a decimal too
  printf("x: %lf\n", y);

  return 0;
}