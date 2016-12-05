#include "cs50.c"
#include <stdio.h>

int getMinute();
int bottleCalc();
int main(void)

{
  int i = getMinute();
  int b = bottleCalc(i);
  printf("You spend about %i bottles of water everytime you take a shower. Save your water :)\n",b);
}

int getMinute (void)

  {
    int m;
    do {
          printf("How many minutes does it take you to take a shower?\n");
          m = GetInt();
        }
    while (m <= 0);
    return m;
  }

int bottleCalc (int input)

  {
    int bc = input * 192 / 16;
    return bc;
  }
