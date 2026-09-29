#include <stdio.h>

/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

long long factorial(int n) {
  int x = 1;
  for (int i = n; i > 0; i--) {
    x = x * i;
  }
  return x;
}

int main(void) {
  int n;

  printf("Enter a non-negative integer n: ");
  if (scanf("%d", &n) == 1 && n > 0) {
    long long x = factorial(n);
    printf("%lld\n", x);
  } else {
    printf("Invalid input\n");
  }
  return 0;
}
