// file-io-2
// File I/O (Input/Output)
#include <stdio.h>

int main(void)
{
  FILE *fhWrite;

  // 'a' means open the file, write.txt, with append mode
  // this adds stuff in the file without deleting any previous data in it
  fhWrite = fopen("write.txt", "a");
  if (fhWrite == NULL)
  {
    printf("Error opening file!\n");
    return 1;
  }
  else
  {
    fprintf(fhWrite, "ishowspeed has entered the chat\n");
    
    fclose(fhWrite);
  }

  return 0;
}