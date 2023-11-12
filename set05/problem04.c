//Program to find out the mood of the camel
#include<stdio.h>
void input_camel_details(float *radius,float *height,float *length)
{
  printf("Enter the radius of the stomach of the camel: ");
  scanf("%f",radius);
  printf("Enter the height of the camel: ");
  scanf("%f",height);
  printf("Enter the length of the camel: ");
  scanf("%f",length);
}
int find_mood(float radius,float height,float length)
{
  if(radius<height&&radius<length)
  {
    return -1;
  }else if(length<height)
  {
    return 0;
  }else{
    return 1;
  }
}
void output(float radius,float height,float length,int mood)
{
  if(mood<0)
  {
    printf("The Camel is Sick");
  }else if(mood==0)
  {
    printf("The Camel is Tense");
  }else{
    printf("The Camel is Happy");
  }
}
int main()
{
  float r,h,l;
  int m;
  input_camel_details(&r,&h,&l);
  m=find_mood(r,h,l);
  output(r,h,l,m);
  return 0;
}