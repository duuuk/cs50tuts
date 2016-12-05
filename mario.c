#include "cs50.c"
#include <stdio.h>

int main(void)

{
    int h = 0;

        {
            do

                {
                    printf("Enter height of the pyramid: ");
                    h = GetInt();
                }

            while (h <= 0 || h >= 24);


            for (int r = 0; r < h; r++) //prints the rows

                {

                    for (int s = 0; s < h-r-1; s++) //prints the spaces
                        {
                            printf(" ");
                        }


                    for (int b = 0; b < r+2; b++) //prints the blocks (hashes)
                        {
                            printf("#");
                        }

                    printf("\n");

                }
        }
}
