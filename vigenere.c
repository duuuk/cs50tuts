#include "cs50.c"
#include <stdio.h>
#include <string.h>
#include <ctype.h>



int main (int argc, string argv[])

{
  if (argc != 2)
    {
      printf ("Please provide a single argument which is a key\n");
      return 1;
    }

  string k = argv[1];
  string p;

  printf ("What string do you wish to encrypt?\n");
  p = GetString();

  /*for (int i = 0, n = strlen(k); i < n; i++) //Check
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
*/
    for (int j = 0, m = strlen(p); j < m; j++)
      {
        printf ("%c", ((p[j] - 'a' + (k[j] % strlen(k)) % 26 + 'a')));
      }
      //printf ("%c", ((m[i] - 'A' + k) % 26 + 'A'));


    printf ("\n");

}
