// for-loops-2
// for loops
#include <stdio.h>

// program to convert meters to feet
int main(void){
    double initial = 0, step = 0, stop = 0;

    do 
    {
        printf("Initial (m): ");
        scanf("%lf", &initial);
        if (initial < 0) printf("Must be greater than or equal to 0\n");
        
    } while (initial < 0);

    do 
    {
        printf("Step (m): ");
        scanf("%lf", &step);
        if (step <= 0) printf("Must be greater than 0\n");
        
    } while (step <= 0);

    do 
    {
        printf("Stop (m): ");
        scanf("%lf", &stop);
        if (stop < 0) printf("Must be greater than or equal to 0\n");
        
    } while (stop < 0);

    printf("\n");
    printf("Meters    Feet\n");
    printf("--------------------\n");
    for (double conv = initial; conv <= stop; conv += step){
        // the .2 limits the number of decimal points we display so outputs 2 decimal digits
        // the 10 is the column length
        // adding a negative in front of 10 makes the numbers left aligned
        printf("%-10.2f%-10.2f\n", conv, conv * 3.28084);
    }
    printf("\n");

    return 0;
    
}