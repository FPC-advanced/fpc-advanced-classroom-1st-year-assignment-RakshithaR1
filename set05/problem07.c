// Program to find out if the name of the camel is a nice name
#include <stdio.h>
void input(char *name)
{
  printf("Enter the name of the Camel: ");
  scanf("%s", name);
}
int has_nice_name(char *c)
{
  int vov = 0, con = 0;
  for (int i = 0; c[i] != '\0'; i++)
  {

    if (c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'u' || c[i] == 'o' || c[i] == 'A' || c[i] == 'E' || c[i] == 'I' || c[i] == 'O' || c[i] == 'U')
    {
      vov += 1;
    }
    else
    {
      con += 1;
    }
  }
  if (vov >= 2 && con >= 2)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
void output(int res)
{
  if (res == 1)
  {
    printf("The camel has a nice name.");
  }
  else
  {
    printf("The camel does not have a nice name.");
  }
}
int main()
{
  char name[100];
  int result;
  input(name);
  result = has_nice_name(name);
  output(result);
  return 0;
}