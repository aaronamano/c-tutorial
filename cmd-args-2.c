// cmd-args-2
// command line arguments
#include <stdio.h>
#include <stdlib.h>

// a program to print a string n times
int main(int argc, char *argv[])
{
  if (argc == 3)
  {
    // atoi() converts to an integer
    int numTimes = atoi(argv[2]);

    for (int i = 0; i < numTimes; i++)
    {
      printf("%s\n", argv[1]);
    }
  }
  else
  {
    printf("2 arguments expected!\n");
    printf("1st - string to print out\n");
    printf("2nd - # of times to print\n");
    return 1;
  }

  return 0;
}

/*
make cmd-args-2
./cmd-args-2 <string> <int>

e.g.
./cmd-args-2 ABC 5

prints out:
ABC
ABC
ABC
ABC
ABC
*/
