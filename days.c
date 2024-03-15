#include<stdio.h>

void main()
{
  int month,days,years;
  printf("Enter number of days\n");
  scanf("%d",&days);
  years=days/365;
  days=days-(365*years);
  month=days/30;
  days=daya-(month*30);
  printf("Years=%d\nMonths=%d\nDaya=%d\n",years,month,days); 
}
