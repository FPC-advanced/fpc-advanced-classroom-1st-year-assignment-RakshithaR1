//2. Write a C program to add two numbers.
#include<stdio.h>
int main()
{
  int a,b,sum;
  printf("Enter the values of a and b: ");
  scanf("%d %d",&a,&b);
  sum=a+b;
  printf("The sum of %d and %d is %d",a,b,sum);
  return 0;
}
