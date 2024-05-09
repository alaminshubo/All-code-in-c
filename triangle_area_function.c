#include<stdio.h>
double trianglearea(double b, double h)
{
    return 0.5 * b * h;
}
int main ()
{
  double base, high;
  printf("Enter Base : ");
  scanf("%lf",&base);
  printf("Enter high : ");
  scanf("%lf",&high);

  double area = trianglearea(base,high);
  printf("Area= %.lf\n",area);
}
