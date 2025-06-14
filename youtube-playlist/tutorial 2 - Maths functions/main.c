#include <stdio.h>
#include <math.h>

// To use the math.h header you need to add '-lm' to the gcc comand when compiling

int main() {

  float x = 45;
  /*
    Square root
    x = sqrt(9);

    Power of
    x = pow(2, 2) == 2^2;

    Rounded to nearest whole value
    x = round(3.14);

    Round up
    x = ceil(3.14);

    Round down
    x = floor(3.14);

    Absolute value (always positive)
    x = abs(-3);

    Logorithmic value (always base 10). x must be a float though
    x = log(3);

    sin, cos, tan - result will be in radians
    x = sin(45);
    x = cos(45);
    x = tan(45);

  */

  printf("%f\n", x);
  return 0;
}
