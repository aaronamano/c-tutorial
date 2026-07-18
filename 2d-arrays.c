// 2d-arrays
// 2D arrays
#include <stdio.h>

int main(void)
{
    int data[2][3] = {{1, 2, 3}, {4, 5, 6}};
    // get number of rows
    int n  = sizeof(data) / sizeof(data[0]);
    // get number of columns
    int m = sizeof(data[0]) / sizeof(data[0][0]);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("data[%d][%d] = %d\n", i, j, data[i][j]);
        }
    }
    

    return 0;
}