// input-processing-output (IPO) model example
#include <stdio.h>

int main(void){
    // important to initialize variables to something otherwise there may be potential bugs or a random garbage value
    int velocity = 0;
    int time = 0;

    printf("velocity: ");
    // scanf takes the user's input
    // stores the info the user enters in the velocity variable
    scanf("%d", &velocity);
    printf("time: ");
    scanf("%d", &time);

    int distance = velocity * time;
    // %d is the placeholder for an integer
    // add an arguemnt to fill that placeholder, which is the distance variable
    printf("distance: %d \n", distance);

    return 0;
}