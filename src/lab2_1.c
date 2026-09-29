#include <stdio.h>

/*
    Task:
    Write a function `int sum_to_n(int n)` that computes
    the sum of all integers from 1 up to n using a for loop.

    In main():
      - Ask user for a positive integer n
      - If n < 1, print an error
      - Otherwise, call sum_to_n and print the result
*/

int sum_to_n(int n) {
  // TODO: implement sum with a for loop
  int x = 0;
  for (int i = n; i > 0; i--) {
    x = x + i;
  }
  return x;
}

int main(void) {
  int n;
  printf("Enter a positive integer n: ");
  if (scanf("%d", &n) == 1) {
    int x = sum_to_n(n);
    printf("%d\n", x);
  } else {
    printf("Invalid input");
  }
  return 0;
}
