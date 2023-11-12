//Program to find the average of all the odd elements in an array
#include<stdio.h>
int input_n()
{
  int n;
  printf("Enter the size of the array: ");
  scanf("%d",&n);
  return n;
}
void input(int n,int a[n])
{
  printf("Enter the elements of the array:\n ");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}
float odd_average(int n,int a[n])
{
   float sum=0.0;
   int counts=0;
  for(int i=0;i<=n;i++)
  {
    if(a[i]%2!=0)
    {
      sum += a[i];
      counts +=1;
    }
  }
  return sum/counts;
}
void output(float avg)
{
  printf("Average of all the odd elements is: %f",avg);
}
int main()
{
  int n,a[100];
  float avg;
  n=input_n();
  input(n,a);
  avg=odd_average(n,a);
  output(avg);
  return 0;
}