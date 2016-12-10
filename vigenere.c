#include "cs50.c"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//printf ("%c", ((m[i] - 'A' + k) % 26 + 'A'));


int main (int argc, string argv[])

{
  if (argc != 2)
    {
      printf ("Please provide a single argument which is a key\n");
      return 1;
    }

  string k = argv[1];
  string p;

  for (int i = 0, n = strlen(k); i < n; i++) //Check
    {
      if (isalpha(k[i]))
        {
          printf ("What string do you wish to encrypt?\n");
          p = GetString();
        }
      else
        {
          printf ("Key must be only alphabetical characters\n");
          return 1;
        }
    }

  for (int j = 0, m = strlen(p); j < m; j++)
    {
      for (int x = 0, y = strlen(k); x < y; x++)
        {
          printf ("%c", p[x] + k [x]);
        }
    }

}
