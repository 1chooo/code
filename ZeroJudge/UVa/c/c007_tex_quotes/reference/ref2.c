#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{

  char str[999] = {0};
  bool flag = true;
  int i;

  while (gets(str))
  {
    for (i = 0; i < strlen(str); i++)
    {
      if (flag && str[i] == '"')
      {
        printf("``");
        flag = false;
      }
      else if (!flag && str[i] == '"')
      {
        printf("''");
        flag = true;
      }
      else
      {
        printf("%c", str[i]);
      }
    }
    printf("\n");
  }

  return 0;
}