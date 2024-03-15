#include <stdio.h>
void main()
{
  int pamt,time,rate;
  float si;
  printf("Enter the principle amount: ");
  scanf("%d",&pamt);
  printf("Enter the time: ");
  scanf("%d",&time);
  printf("Enter the rate of interest: ");
  scanf("%d",&rate);
  si=(pamt*(float)rate*time)/100;
  printf("Simple Interest is %.3f",si);
}
