#include<stdio.h>

void main()
{
  int N;
  printf("Enter the Number\n");
  scanf("%d",&N);
  if(N<0)
  {
    N=-N;
    printf("Absolute Value is %d",N);
  }
  else
    printf("Absolute Value is %d",N);
}
