// while loops
#include <stdio.h>

int main(void){
    int i = 0;

    while (i < 5){
        printf("i: %d\n", i);
        // i is incremented by 1
        // equivalent to i = i + 1;
        // equivalent to i += 1;
        i++;
    }

    return 0;
}