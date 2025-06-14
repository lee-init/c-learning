#include <stdio.h>
#include <math.h>

#define M_PI acos(-1.0);

int main() {

  int radius = 0;
  double pi = M_PI;
  float area = 0.0f;
  float surface_area = 0.0f;
  double volume = 0.0;

  printf("Enter the radius: ");
  scanf("%d", &radius);

  area = pi * (pow(radius, 2));
  surface_area = 4 * pi * (pow(radius, 2));
  // Using 4/3 gives a different result to 4.0/3.0 - Probably because volume is a double;
  volume = (4.0 / 3.0) * pi * (pow(radius, 3));

  printf("Area: %.2f\n", area);
  printf("Surface Area: %.2f\n", surface_area);
  printf("Volume: %.2f\n", volume);

  return 0;
}
