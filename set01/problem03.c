//Write a C program to add two numbers using pass by value
#include<stdio.h>
int input()
{
  int a;
  printf("Enter the number: ");
  scanf("%d",&a);
  return a;
}
int add(int a,int b)
{
  return a+b;
}
void output(int a,int b,int sum)
{
  printf("The sum of %d and %d is %d",a,b,sum);
}
int main()
{
  int x,y,sum;
  x=input();
  y=input();
  sum=add(x,y);
  output(x,y,sum);
  return 0;
}