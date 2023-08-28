#include <stdio.h>
int main ()
{
  int salary[6]= {5000,6000,7000,8000,9000,10000};
  int i , temp , n = 6;

  for(i=0;i < n / 2; i++) {
    temp = salary[i];
    salary[i] = salary[n-1-i];
    salary[n-1-i] = temp;
  }

  for(i = 0; i<n;i++) {
    printf("%d\n", salary[i]);
  }
  return 0;
}
