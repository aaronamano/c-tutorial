// 2d-arrays-2
// 2D arrays
#include <stdio.h>

// use define to create constants
// these are inserted in the program when it compiles
// doesn't change during runtime
// these are preprocessor statements
#define ROWS 2
#define COLS 3

void printArray(int data[ROWS][COLS]);
void inputArray(int data[ROWS][COLS]);

int main(void)
{
    int data[ROWS][COLS] = {0}; // initializes all the values to 0

    inputArray(data);
    printArray(data);

    return 0;
}

void printArray(int data[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("data[%d][%d] = %d\n", i, j, data[i][j]);
        }
    }
}

void inputArray(int data[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("data[%d][%d] = ", i, j);
            scanf("%d", &data[i][j]);
        }
    }
}

// 2d arrays are passed by reference!