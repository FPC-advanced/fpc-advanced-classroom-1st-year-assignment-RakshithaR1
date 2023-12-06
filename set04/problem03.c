// Program to find the 'nCr' of the given n and r
#include <stdio.h>
void input_n_and_r(int *n, int *r)
{
  printf("Enter the value of n: ");
  scanf("%d", n);
  printf("Enter the value of r: ");
  scanf("%d", r);
}

int nCr(int n, int r)
{
 int diff=n-r,i=n,j=1,k=1,l=1;
 int diff2=i-diff;
 while(r!=0&&k>r)
 {
   if(i<diff2)
   {
    j*=i;
    i--;
   }
   if(i==diff2&&k<=r)
   {
     l*=k;
     k++;
   }
}
return j/l;
  
}
void output(int n, int r, int result)
{
  printf("For n = %d and r = %d, nCr = %d", n, r, result);
}
int main()
{
  int n, r, result;
  input_n_and_r(&n, &r);
  result = nCr(n, r);
  output(n, r, result);
  return 0;
}
/*int fact(int a)
{
  int fac=1;
  for(int i=1;i<=a;i++)
  {
    fac*=i;
  }
  return fac;
   int num, den, dif, fac = 1, fac2 = 1, comb;
    num=fact(n);
  dif = n - r;
  fac=fact(dif);
  fac2=fact(r); 
  den = fac * fac2;
  comb = num / den;
  return comb;
}*/