// Program to find the weight of a truck  load of n camels
#include <stdio.h>
#include <math.h>
typedef struct _camel
{
  float radius, height, length, weight;
} Camel;
void input(int n, Camel c[n], float *truck_weight)
{
  printf("Enter the number of camels: \n");
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    printf("Enter the height of camel no. %d:\n", i + 1);
    scanf("%f", &c[i].height);
    printf("Enter the length of camel no. %d:\n", i + 1);
    scanf("%f", &c[i].length);
    printf("Enter the radius of camel no. %d:\n", i + 1);
    scanf("%f", &c[i].height);
    c[i].weight = 0;
  }
  printf("Enter the weight of the truck:\n");
  scanf("%f", truck_weight);
}
void find_camel_weight(int n, Camel c[n])
{
  for (int i = 0; i < n; i++)
  {
    const float pi = 3.1415;
    float cu = 0;
    float preguess = c[i].height * c[i].length, guess;
    while (fabs(guess - preguess) > 0.0001)
    {
      preguess = guess;
      guess = 0.5 * (guess + (c[i].height * c[i].length) / guess);
    }
    cu = c[i].radius * c[i].radius * c[i].radius;
    c[i].weight = pi * cu * guess;
  }
}
float compute_total_weight(int n, Camel c[n], float truck_weight)
{
  float tot_cam_we = 0;
  for (int i = 0; i < n; i++)
  {
    tot_cam_we += c[i].weight;
  }
  return truck_weight + tot_cam_we;
}
void output(float total_weight)
{
  printf("The total weight of the truck is: %.6f", total_weight);
}
int main()
{
  int n;
  Camel c[100];
  float truckweight, total;
  input(n, c, &truckweight);
  find_camel_weight(n, c);
  total = compute_total_weight(n, c, truckweight);
  output(total);
  return 0;
}
