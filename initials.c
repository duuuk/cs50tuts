#include "cs50.c"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)

  {
    printf ("Word to Initialize:\n");
    string name = GetString();

    if (isalpha(name[0]))
      {
        printf ("%c", toupper(name[0]));
      }

    else
      {
        printf ("Provide words only\n");
        return 1;
      }

      for (int i = 0, n = strlen(name); i < n; i++)
        {
          if (isspace(name[i]))
          {
            printf ("%c", toupper(name[i+1]));
            /*
            else if (name[i+1])
              {
                printf ("Provide words only\n");
                return 1;
              }
            */
          }
        }
    printf ("\n");
  }
