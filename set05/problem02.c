// Program to find the weight of a camel,given height,length and stomach radius using four functions
#include <stdio.h>
#include<math.h>
void input_camel_details(float *radius, float *height, float *length)
{
  printf("Enter the radius of the stomach of the camel: ");
  scanf("%f", radius);
  printf("Enter the height of the camel: ");
  scanf("%f", height);
  printf("Enter the length of the camel: ");
  scanf("%f", length);
}
float find_weight(float radius, float height, float length)
{
  float we, sq,rt;
  const float pi= 22.0/7;
  rt=sqrt(height*length);
  sq = radius * radius * radius;
  return pi* sq * rt;
  
}
void output(float radius, float height, float length, float weight)
{
  printf("The weight of the camel with radius: %.1f,height: %.1f,length: %.1f is %.4f", radius, height, length, weight);
}
int main()
{
  float r, h, l, w;
  input_camel_details(&r, &h, &l);
  w = find_weight(r, h, l);
  output(r, h, l, w);
  return 0;
}