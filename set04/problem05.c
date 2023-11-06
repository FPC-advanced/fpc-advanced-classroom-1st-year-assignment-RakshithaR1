//Program to find the index of the largest number in an array
#include<stdio.h>
int input_size()
{
  int n;
  printf("Enter the size of the array: ");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  printf("Enter the array elements: ");
  for(int i=0;i<n;i++)
  {
    printf("Enter the element: %d) \n",i+1);
    scanf("%d",&a[i]);
  }
}
//valgarade
int find_largest_index(int n,int a[n])
{
 int index=a[0];
 int large;
  for(int i=0;i<n;i++)
  {
    if (a[i]>index)
    {
      index=a[i];
      large=i;
    }
    
  }
  return large;
}
void output(int index)
{
  printf("The index of the largest number in the array is %d ",index);
}
int main()
{
  int n,index,a[100];
  n=input_size();
  input_array(n,a);
  index=find_largest_index(n,a);
  output(index);
  return 0;
}
