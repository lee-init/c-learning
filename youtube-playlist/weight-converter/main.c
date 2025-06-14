#include <stdio.h>

int main() {

  int choice = 0;
  float kilograms = 0.0;
  float pounds = 0.0;

  printf("Weight Conversion Calculator\n");
  printf("1. Kilograms to Pounds\n");
  printf("2. Pounds to Kilograms\n");
  printf("Enter your choice (1 or 2): ");
  scanf("%d", &choice);

  if (choice == 1) {
    printf("Enter the weight in kilograms: ");
    scanf("%f", &kilograms);
    pounds = kilograms * 0.45359;
    print("%.2fkg is equal to %.2flb", kilograms, pounds);
  }
  else if (choice == 2) {
    printf("Enter the weight in pounds: ");
    scanf("%f", &pounds);
    kilograms = pounds * 2.20462;
    print("%.2fkg is equal to %.2flb", pounds, kilograms);
  }
  else {
    printf("Invalid option. Please enter either 1 or 2.\n");
  }

  return 0;
}