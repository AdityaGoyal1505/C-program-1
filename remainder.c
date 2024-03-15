#include<stdio.h>

void main()
{
  int a,b;
  float rem;
  //Input two numbers
  printf("Enter two numbers:\n");
  scanf("%d %d",&a,&b);
  //remainder
  rem=a%b;
  printf("Remainder=%d",rem);
}
