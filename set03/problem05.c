//Program to find all the prime numbers between 2 to n Eratosthenes Sieve method
#include<stdio.h>
int input_array_size()
{
  int n;
  printf("Enter the size of the array: ");
  scanf("%d",&n);
  return n;
}
void init_array(int n,int a[n])
{
  a[0]=2;
  for(int i=1;i<n;i++)
  {
    a[i]=a[i-1]+1; 
  }
}
void erotosthenes_sieve(int n,int a[n])
{
   

}
void output(int n,int a[n])
{
  printf("The prime numbers between 2 and %d is ",n);
  for(int i=0;i<n;i++)
  {
    printf("%d",a[i]);
  }
}
int main()
{
  int n,a[100];
  n=input_array_size();
  init_array(n,a);
  erotosthenes_sieve(n,a);
  output(n,a);
  return 0;
}