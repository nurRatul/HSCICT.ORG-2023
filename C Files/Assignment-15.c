#include <stdio.h>
int main()
{
  int n , sum;
  n = (99-3)/3 + 1;
  sum = n * (2*3 + (n-1)*3)/2;
  printf("Sum of all numbers from 1-100 divisible by 3 is: %d ", sum);
  return 0;
}
