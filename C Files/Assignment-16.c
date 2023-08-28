#include <stdio.h>
int main()
{
  int i , sum;
  sum = 0;
  for(i =0; i<100; i++) {
    if(i % 3 == 0) {
      sum += i;
    }
  }
  printf("Sum of all numbers from 1-100 divisible by 3 is: %d", sum);
  return 0;
}
