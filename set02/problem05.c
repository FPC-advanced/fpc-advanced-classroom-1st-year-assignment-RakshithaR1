//Program to find GCD (HCF) of two number
#include<stdio.h>
int input()
{
  int a;
  printf("Enter the number: ");
  scanf("%d",&a);
  return a;
}
int find_gcd(int a,int b)
{
  
  while(a!=b)
  {
     
  }
  
}
void output(int a,int b,int gcd)
{
  printf("The GCD of %d and %d is %d",a,b,gcd);
}
int main()
{
  int x,y,gcd;
  x=input();
  y=input();
  gcd=find_gcd(x,y);
  output(x,y,gcd);
  return 0;
}