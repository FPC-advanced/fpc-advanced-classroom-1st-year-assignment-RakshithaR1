// Program to check if the given  number is prime
#include <stdio.h>
int input_number()
{
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  return n;
}
int is_prime(int n)
{
  if (n <= 1)
  {
    return 0;
  }
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      return 0;
    }
  }
  return 1;
}

void output(int n, int result)
{
  if (result != 0)
  {
    printf("%d is a prime number", n);
  }
  else
  {
    printf("%d is not a prime number", n);
  }
}
int main()
{
  int n, prime;
  n = input_number();
  prime = is_prime(n);
  output(n, prime);
  return 0;
}