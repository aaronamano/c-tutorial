#include <stdio.h>

int main(void){
    // creates an int-based array with length 5 (allocates 5 slots of memory)
    int grade[] = {92, 85, 72, 73, 95};
    // you don't need to add anything in the square brackets next to grade; it automatically defines the length

    // grade[5] = 100 will give an out of bounds error

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