// functions-3
// functions
#include <stdio.h>

double add(double x, double y);
double power(double x, int n);
double mult(double x, double y);
float triple(float n);

int main(void)
{
  float x = 5.0;
  triple(x);
  // using just triple(x) doesn't work since x's value is copied and passed to the function
  // doesn't change the original variable, x
  // instead we need to modify x like below
  x = triple(x);
  printf("result of triple function: %f\n", x);

  printf("result of add function: %f\n", add(10.5, 5.9));

  printf("result of power function: %f\n", power(5.8, 9));

  return 0;
}

float triple(float n)
{
  n = n * 3;
  return n;
}

double add(double x, double y)
{
  double res = x + y;
  return res;
}

double mult(double x, double y) { return x * y; }

double power(double x, int n){
  double res = x;
  for (int i = 1; i < n; i++){
    // using a function in a function
    res = mult(res, x);
  }
  return res;
}