#include "cs50.c"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)

  {
    printf ("What is your name? ");
    string name = GetString();

    for (int i = 0, n = strlen(name); i < n; i++)
      {
        if (isalpha(name[i]))
          {
            printf ("%c", toupper(name[i]));
          }
      }
    printf ("\n");
  }
