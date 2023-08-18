#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{

  char chr;
  bool flag = true;

  while ((chr = getchar()) != EOF)
  {
    if (flag && chr == '"')
    {
      printf("``");
      flag = false;
    }
    else if (!flag && chr == '"')
    {
      printf("''");
      flag = true;
    }
    else
    {
      printf("%c", chr);
    }
  }

  return 0;
}