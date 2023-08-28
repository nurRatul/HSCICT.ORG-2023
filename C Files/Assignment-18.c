#include <stdio.h>
int main()
{
  double temperature_dinajpur[] = {25.4 , 25.01, 24.06, 23.7, 22.9, 22.1, 21.6, 22, 21.03, 20.5};
  double sum , average_temp;
  for(int i = 0; i<10 ; i++) {
    sum += temperature_dinajpur[i];
  }
  average_temp = sum/10;
  printf("Average Temperature is: %lf", average_temp);
  return 0;
}
