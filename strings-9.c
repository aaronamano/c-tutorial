// strings-9
// strings
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
  char s[] = "This IS tHe WaY.";
  s[0] = tolower(s[0]); // converts character at index 0 to lowercase

  printf("%s\n", s);
  
  return 0;
}