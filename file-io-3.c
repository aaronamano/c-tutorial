// file-io-3
// File I/O (Input/Output)
#include <stdio.h>
#include <stdlib.h>

#define LINE_BUFFER 100
#define NUM_BUFFER 100

int main(void)
{
  FILE *fhRead;

  // 'r' reads the file, write.txt
  fhRead = fopen("write.txt", "r");
  if (fhRead == NULL)
  {
    printf("file couldn't be opened\n");
    return 1;
  }
  else
  {
    char buffer[LINE_BUFFER];
    int data[NUM_BUFFER];
    int i = 0;

    // fgets(buffer, 100, fhRead) reads first line only up to 100 characters, then stops

    // reads everything until there's nothing left in the file
    while (fgets(buffer, 100, fhRead) != NULL)
    {
      printf("%s", buffer);
      data[i] = atoi(buffer);
      i++;
    }
    fclose(fhRead);
    int numLines = i;
    int total = 0;

    for (int j = 0; j < numLines; j++)
    {
      printf("data[%d] = %d\n", j, data[j]);
      total += data[j];
    }
    printf("average: %d\n", total / numLines);
  }

  return 0;
}