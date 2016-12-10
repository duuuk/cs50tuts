#include "cs50.c"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[])

  {
    string k = argv[1];
    int klen = strlen(k);
    {
      if (argc == 2)
        {
          for (int i = 0; i < klen; i++)
            {
              if (!isalpha(k[i]))
                {
                  printf ("Key must be only alphabetical letters\n");
                  return 1;
                }
            }
        }
      else
        {
          printf ("Please provide a single argument which is a key.\nUsage: ./vigenere <key> (Without the brackets)\n");
          return 1;
        }
    }

    printf ("Enter the text you wish to encrypt:\n");
    string p = GetString();

    for (int i = 0, j = 0, n = strlen(p); i < n; i++)
      {
        int lekey = toupper(k[j % klen]) - 'A';

        if (isupper(p[i]))
          {
            printf ("%c", ((p[i] - 'A' + lekey) % 26 + 'A'));
            j++;
          }
        else if (islower(p[i]))
          {
            printf ("%c", ((p[i] - 'a' + lekey) % 26 + 'a'));
            j++;
          }
        else
          {
            printf ("%c", p[i]);
          }
      }
    printf ("\n");

  }
