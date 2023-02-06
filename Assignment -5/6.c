

/* 6. Write a program to print the first N even natural numbers */

#include <stdio.h>

int main() {
  int n, i;
  printf("Enter the number of even natural numbers you want to print: ");
  scanf("%d", &n);
  for (i = 2; i <= 2 * n; i += 2) {
    printf("%d\n", i);
  }
  return 0;
}
