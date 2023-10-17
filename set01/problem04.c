//Program to add two numbers using pass by reference
#include<stdio.h>
void input(int *a,int *b)
{
  printf("Enter the first number: ");
  scanf("%d",a);
  printf("Enter the second number: ");
  scanf("%d",b);
  }
  void add(int a,int b,int *sum)
  {
    *sum=a+b;
  }
  void output(int a,int b,int sum)
  {
    printf("The sum of %d and %d is %d",a,b,sum);
  }
  int main()
  {
    int x,y,sum;
    input(&x,&y);
    add(x,y,&sum);
    output(x,y,sum);
    return 0;
  }