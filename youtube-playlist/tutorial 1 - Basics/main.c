#include <stdio.h>
#include <string.h>

int main() {
  int age = 0;
  float gpa = 0.0f;
  char grade = '\0';
  char name[30] = "";

  printf("Enter your age: ");
  scanf("%d", &age);

  printf("Enter your gpa: ");
  scanf("%f", &gpa);

  // Add space in " %c" to clear the input buffer
  printf("Enter your grade: ");
  scanf(" %c", &grade);

  // Input buffer also needs clearing - use getchar() function
  getchar();
  printf("Enter your full name: ");
  fgets(name, sizeof(name), stdin);
  // fgets reads a whole line and adds a return character at the end
  name[strlen(name) - 1] = '\0';

  printf("%s\n", name);
  printf("%d\n", age);
  printf("%.2f\n", gpa);
  printf("%c\n", grade);

  return 0;
}