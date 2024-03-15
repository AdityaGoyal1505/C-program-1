#include<stdio.h>

void main()
{
  float cel,fer;
  //Input the temprature
  printf("Enter the temperature in Fehranite:\n");
  scanf("%f",&fer);
  //Operations
  cel=(fer-32)*5/4;
  printf("Temperature in Celsius:%f",cel);
}
