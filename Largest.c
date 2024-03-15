#include<stdio.h>

void main()
{
  int a,b,c;
  printf("Enter number1\n");
  scanf("%d",&a);
  printf("Enter number2\n");
  scanf("%d",&b);
  printf("Enter number3\n");
  scanf("%d",&c);
  if(a>b && a>c)
    printf("%d is the larges",a);
  else if(b>c && b>a)
    printf("%d is the larges",b);
else if(a>b && a>c)
    printf("%d is the larges",c);
}
