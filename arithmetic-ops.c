// arithmetic operators
#include <stdio.h>

// values like 'd', 10, 5.2, and -9.8 are called literal values
int main(void){
    // can declare multiple variables in a single line
    double x = 5.2, y = 2.5;

    double mult = x * y;
    double add = x + y;
    double div = x / y;
    double sub = x - y;

    printf("product: %f\n", mult);
    printf("sum: %f\n", add);
    printf("quotient: %f\n", div);
    printf("difference: %f\n", sub);

    return 0;
}