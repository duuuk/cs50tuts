#include "cs50.c"
#include <stdio.h>

int marioPyramid();
int main(void)

{
  marioPyramid ();
}

int marioPyramid (void)

  {

    int i;

    do
      {
        printf ("Enter the height of the pyramid: ");
        i = GetInt();
      }
    while (i <= 0 || i >= 24);
    

    for (int row = 0; row < i; row++)
        {
          for (int space = 0; space < i-row-1; space++)
            {
              printf (" ");
            }
          for (int hash = 0; hash < row+2; hash++)
            {
              printf ("#");
            }

          printf ("\n");

        }
        return 0;

    }
