// cmd-args
// command line arguments
#include <stdio.h>

// argc will contain the number of arguments including the program executable itself
// argv is an array of strings
int main(int argc, char *argv[])
{
  printf("argc: %d\n", argc);
  printf("argv[1]=%s\n", argv[1]);

  for (int i = 0; i < argc; i++)
  {
    printf("argv[%d]=%s\n", i, argv[i]);
  }
  
  return 0;
}