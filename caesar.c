#include "cs50.c"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[])

  {
    //Checks if the argument is single
    if (argc != 2)
      {
        printf("Provide a single argument\n");
        return 1;
      }

    //Checks if the input is positive
    if (atoi(argv[1]) <= 0)
      {
        printf("Give me a positive key number\n");
        return 1;
      }

    //Converts the input to integer and assigns it to k
    int k = atoi(argv[1]);

    //Prompts the user for a message
    string m = GetString();

    //Encrypts the message
    for (int i = 0, n = strlen(m); i < n; i++)
      {
        //Rotates each character by k position & wrap from Z to A
        if (isupper(m[i]))
          {
            printf ("%c", ((m[i] - 'A' + k) % 26 + 'A'));
          }

        else if (islower(m[i]))
          {
            printf ("%c", ((m[i] - 'a' + k) % 26 + 'a'));
          }

        else
          {
            printf ("%c", m[i]);
          }
      }

    printf("\n");

  }
