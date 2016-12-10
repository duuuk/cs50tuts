#include "cs50.c"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)

  {
    printf ("Word to Initialize ");
    string name = GetString();

    for (int i = 0, n = strlen(name); i < n; i++)
      {
        if (isalpha(name[i]))
          {
            printf ("%c", toupper(name[i]));
          }
        else if (isspace(name[i]))
          {
            printf (" ");
          }

          

        else
          {
            printf ("Please provide only words\n");
            return 1;
          }
      }
    printf ("\n");
  }
