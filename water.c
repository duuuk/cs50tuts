#include "cs50.c"
#include <stdio.h>

int main(void)

{
    int ouncePerMin = 192;
    int ouncePerBott = 16;
    int showerMin;
        {
            do
                {
                    printf("How many minutes does it take you to take a shower?\n Enter here: ");
                    showerMin = GetInt();
                }
            while (showerMin <= 0);

            showerMin = showerMin * ouncePerMin / ouncePerBott;
            printf("You spend about %i bottles of water everytime you take a shower. Try to save your water!\n", showerMin);
        }
}
