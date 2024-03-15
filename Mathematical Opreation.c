#include<stdio.h>

void main()
{
  int a,b,sum,diff,mul,div;
  //Input of numbers
  printf("Enter two numbers:\n");
  scanf("%d %d",&a,&b);
  //operations
  sum=a+b;
  diff=a-b;
  mul=a*b;
  div=a/b;
  printf("Sum=%d\n",sum);
  printf("Diffrence=%d\n",diff);
  printf("Multiplication=%d\n",mul);
  printf("Division=%d\n",div);
}
