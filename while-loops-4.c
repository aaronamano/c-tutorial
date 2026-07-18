// while-loops-4
// while loops
#include <stdio.h>

int main(void){
    int i = 10;

    // this is an example of an infinite loop
    while (i < 20)
    {
        printf("i: %d\n", i);
        i--;
    }

    return 0;
}