#include <stdio.h>
#include <string.h>

int main()
{

  char a[1001] = {0};
  char b[1001] = {0};
  int i, j;
  int length;
  int min;

  while (gets(a) && gets(b))
  {

    int tableA[26] = {0};
    int tableB[26] = {0};

    for (i = 0; i < strlen(a); i++)
    {
      tableA[a[i] - 'a']++;
    }
    for (i = 0; i < strlen(b); i++)
    {
      tableB[b[i] - 'a']++;
    }

    for (i = 0; i < 26; i++)
    {
      if (tableA[i] && tableB[i])
      {
        if (tableA[i] <= tableB[i])
        {
          min = tableA[i];
        }
        else
        {
          min = tableB[i];
        }
        for (j = 0; j < min; j++)
        {
          printf("%c", i + 97);
        }
      }
    }

    printf("\n");
  }

  return 0;
}