#include <stdio.h>

int main() {
  int a = 10;
  int b = 0;
  int c;

  if (b == 0) {
    fprintf(stderr, "Error: Division by zero\n");
    return 1; // Indicate an error
  } else {
    c = a / b;
    printf("Result: %d\n", c);
  }

  return 0;
} 