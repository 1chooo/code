#include <stdio.h>
int main()
{
  char ch;
  int check = 1;
  while ((ch = getchar()) != EOF)
  {
    if (ch == '"')
    {
      if (check == 1)
      {
        printf("``");
        check = 2;
      }
      else
      {
        printf("''");
        check = 1;
      }
    }
    else
      putchar(ch);
  }
  return 0;
}