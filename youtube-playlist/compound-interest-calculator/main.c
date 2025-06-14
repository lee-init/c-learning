#include <stdio.h>
#include <math.h>

int main() {

  char currency = '$';
  double principal = 0.0;
  double interest_rate = 0.0;
  int years = 0;
  int times_compounded = 0;
  double total = 0.0;

  printf("Compound Interest Calculator\n");

  printf("Enter the principal (P): ");
  scanf("%lf", &principal);

  printf("Enter the interest rate % (r): ");
  scanf("%lf", &interest_rate);
  interest_rate = interest_rate / 100;

  printf("Enter the # of years (t): ");
  scanf("%d", &years);

  printf("Enter # of times compounded per year (n): ");
  scanf("%d", &times_compounded);

  total = principal * pow((1 + interest_rate / times_compounded), (times_compounded * years));
  printf("After %d years, the total will be %c%.2lf\n", years, currency, total);

  return 0;
}