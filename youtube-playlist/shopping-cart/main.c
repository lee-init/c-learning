#include <stdio.h>
#include <string.h>

int main() {

  char currency = '$';
  char food[20] = "";
  float price = 0.0f;
  int num = 0;
  float total = 0.0f;

  printf("What item would you like to buy?: ");
  fgets(food, sizeof(food), stdin);
  food[strlen(food) - 1] = '\0';

  printf("What is the price for each?: ");
  scanf("%f", &price);

  printf("How many would you like?: ");
  scanf("%d", &num);

  total = num * price;
  printf("You have bought %d %s/s\n", num, food);
  printf("The total is: %c%.2f\n", currency, total);

  return 0;
}