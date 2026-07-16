// dynamically allocated memory
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *numbers;
    int size = 2;

    numbers = malloc(sizeof(int) * size);
    int input = 0, i = 0;

    // handles the inputting of the numbers
    do
    {
        if (i == size)
        {
            size += 2;
            // get more space for 'numbers'
            // "enlarges the existing block"
            // if realloc can't make any more space on an original space, it copies the memory from malloc to a different space and add mores there
            numbers = realloc(numbers, sizeof(int) * size);
            printf("Realloc for %d ints\n", size);
        }
        printf("Enter (-1 to quit): ");
        scanf("%d", &input);
        if (input != -1) {
            numbers[i] = input;
            i++;
        }
    } while (input != -1);

    // handles getting the average of those numbers
    int num_elements = i;
    int total = 0;
    for (int j = 0; j < num_elements; j++)
    {
        total += numbers[j];
    }

    // prints out the average
    printf("average: %d\n", total / num_elements);
    

    free(numbers);

    return 0;
}