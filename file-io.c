// file-io
// File I/O (Input/Output)
#include <stdio.h>

int main(void)
{
  FILE *fhWrite;

  // 'w' means open the file, write.txt, with write mode
  fhWrite = fopen("write.txt", "w");
  if (fhWrite == NULL)
  {
    printf("Error opening file!\n");
    return 1;
  }
  else
  {
    int x = 100;
    fprintf(fhWrite, "Hello, World!\n");
    fprintf(fhWrite, "val: %d\n", x);
    for (int i = 0; i < 10; i++)
    {
      fprintf(fhWrite, "%d\n", (i+1));
    }
    
    fclose(fhWrite);
  }

  return 0;
}