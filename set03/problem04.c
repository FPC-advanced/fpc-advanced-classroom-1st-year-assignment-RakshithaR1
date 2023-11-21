// Program to find nth number in the fibonacci sequence.
#include <stdio.h>
int input()
{
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  return n;
}
int find_fibo(int n)
{
  int a = 0, b = 1, c;
  if (n == a)
  {
    return a;
  }
  for (int i = 2; i <= n; i++)
  {
    c = a + b;
    a = b;
    b = c;
  }
  return b;
}
void output(int n, int fibo)
{
  printf("fibo(%d)=%d", n, fibo);
}
int main()
{
  int n, fibo;
  n = input();
  fibo = find_fibo(n);
  output(n, fibo);
  return 0;
}