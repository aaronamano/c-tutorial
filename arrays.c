// arrays
#include <stdio.h>

int main(void){
    int grade[5]; // creates an int-based array with length 5 (allocates 5 slots of memory)
    grade[0] = 92;
    grade[1] = 85;
    grade[2] = 72;
    grade[3] = 73;
    grade[4] = 95;

    grade[2] = grade[2] + 5; // updates grade[2] = 72 + 5 = 77

    for (int i = 0; i < 5; i++){
        printf("grade[%d]=%d\n", i, grade[i]);
    }

    int total = 0;
    for (int i=0; i < 5; i++){
        total += grade[i];
    }

    printf("average: %d\n", total / 5);

    return 0;

}