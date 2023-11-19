// Program to find the sum of n complex numbers
#include <stdio.h>
struct _complex
{
  float real, imaginary;
};
typedef struct _complex Complex;
int get_n()
{
  int n;
  printf("Enter the number of array: ");
  scanf("%d", &n);
  return n;
}
Complex input_complex()
{
  Complex a;
  printf("Enter the real and imaginary part of the number: ");
  scanf("%f %f", &a.real, &a.imaginary);
  return a;
}
void input_n_complex(int n, Complex c[n])
{
  for (int i = 0; i < n; i++)
  {
    printf("No. %d Complex number \n", i + 1);
    c[i] = input_complex();
  }
}
Complex add(Complex a, Complex b)
{
  Complex sum;
  sum.real = a.real + b.real;
  sum.imaginary = a.imaginary + b.imaginary;
  return sum;
}
Complex add_n_complex(int n, Complex c[n])
{
  Complex result = {0.0, 0.0};
  for (int i = 0; i < n; i++)
  {
    result = add(result, c[i]);
  }
  return result;
}
void output(int n, Complex c[n], Complex result)
{
  printf("The sum of the %d complex numbers is ", n);
  for (int i = 0; i < n; i++)
  {
    printf(" %.0f+%.0fi ", c[i].real, c[i].imaginary);
    if(i < n - 1)
    {
      printf(" + ");
      
    }
  }
  printf(" is %.0f+%.0fi", result.real, result.imaginary);
}
int main()
{
  int n;
  Complex c[100], sum;
  n = get_n();
  input_n_complex(n, c);
  sum = add_n_complex(n, c);
  output(n, c, sum);
  return 0;
}