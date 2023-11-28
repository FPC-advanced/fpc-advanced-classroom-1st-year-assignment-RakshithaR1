// Program to find the index of a substring of a string
#include <stdio.h>
void input_string(char *a, char *b)
{
  printf("Enter the string: ");
  scanf("%s", a);
  printf("Enter the substring whose index has to be found: ");
  scanf("%s", b);
}
int sub_str_index(char *string, char *substring)
{

  for (int j = 0; string[j] != '\0'; j++)
  {
    
  }
}
void output(char *string, char *substring, int index)
{
  printf("The index of '%s' in '%s' is %d", substring, string, index);
}
int main()
{
  char a[100], b[100];
  int n;
  input_string(a, b);
  n = sub_str_index(a, b);
  output(a, b, n);
  return 0;
}