#include <stdio.h>

int main() {

  int age = 0;
  printf("Enter your age: ");
  scanf("%d", &age);

  /*
    If age = 70, the bellow condition would return 'You are an adult' because the first statement it hits is true
    This means it will ignore the if (age >= 65) which is the one we __warnattr

    if (age >= 18) {
      printf("You are an adult\n");
    }
    else if (age >= 65) {
      printf("You are a senior\n");
    }

    Swapping these statements around will output the correct string;
  */

  if (age >= 65) {
    printf("You are a senior\n");
  }
  else if (age >= 18) {
    printf("You are an adult\n");
  }
  else if (age < 0) {
    printf("You haven't been born yet\n");
  }
  else if (age == 0) {
    printf("You are a newborn\n");
  }
  else {
    printf("You are a child\n");
  }

  return 0;
}