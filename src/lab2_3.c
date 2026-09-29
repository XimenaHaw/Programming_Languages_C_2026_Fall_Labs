#include <stdio.h>

/*
    Task:
    Write a function `int is_prime(int n)` that returns 1 if n is prime,
    0 otherwise.

    In main():
      - Ask user for an integer n (>= 2)
      - If invalid, print an error
      - Otherwise, print all prime numbers up to n
*/

int is_prime(int n) {
  int d = 2;
  int count = 0;
  while (d <= n && count <= 1) {
    if (n % d == 0) {
      count++;
    }
    d++;
  }
  if (count <= 1) {
    return 1;
  }
  return 0;  // placeholder
}

int main(void) {
  int n;
  int x = 2;

  printf("Enter an integer n (>= 2): ");
  if (scanf("%d", &n) == 1 && n >= 2 ){
    while (x <= n) {
      if (is_prime(x)) {
        printf("%d\n", x);
      }
      x++;
    }
  }
  else {
    printf("Invalid input\n");
  }
  return 0;
}
