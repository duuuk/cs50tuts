#include "cs50.c"
#include <stdio.h>
#include <string.h>

int main(void)

{
        printf("Enter your card number: ");
        int c_num[20] = GetInt();

            {
                if (c_num[0] == 3)
                printf("AmEx\n");

                else if(c_num[0] == 5)
                printf("Master Card\n");

                else if(c_num[0] == 1)
                printf("Visa\n");

                else
                printf("Not valid\n");

            }
}
