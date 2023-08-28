#include <stdio.h>
#include<string.h>
int main ()
{
  char name[21];
  int temp , i , n;
  printf("Name Please: ");
  scanf("%s", name);
  n = strlen(name);
  printf("Your Name in Reverse Order is: ");
  for(i=n-1;i>=0; i--) {
    printf("%c",name[i]);
  }
return 0;
}
