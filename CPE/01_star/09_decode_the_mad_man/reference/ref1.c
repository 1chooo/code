#include <stdio.h>
#include <string.h>

int main()
{

  char str[999] = {0};
  char ct[] = " 234567890-=ertyuiop[]\\dfghjkl;'cvbnm,./";
  char pt[] = " `1234567890qwertyuiop[asdfghjklzxcvbnm,";
  int i, j;

  gets(str);

  for (i = 0; i < strlen(str); i++)
  {
    for (j = 0; j < strlen(ct); j++)
    {
      if (str[i] == ct[j])
      {
        printf("%c", pt[j]);
      }
    }
  }

  printf("\n");

  return 0;
}