#include <cstdio>

int sum(int a, int b) {
  return a + b;
}

int main() {
  int num1 = -10, num2 = 10;
  printf("The sum of values %d and %d is %d.\n", num1, num2, sum(num1, num2));
}

