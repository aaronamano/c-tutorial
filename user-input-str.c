// user-input-str
// Accepting user input strings with spaces
#include <stdio.h>

int main(int argc, char *argv[])
{
  char buffer[100];
  printf("Enter: ");

  // stdin is standard input
  fgets(buffer, 100, stdin);
  
  printf("Buffer: %s\n", buffer);

  return 0;
}