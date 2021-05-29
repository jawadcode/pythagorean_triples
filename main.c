#include <inttypes.h>
#include <stdio.h>

#define num 1001
#define totalnum ((num - 1) * (num - 1))

int main() {
  int m, n, e, temp1, temp2, d, f, a, b, c;
  int i = 0;

  for (m = 1; m < num; m++) {
    for (n = 1; n < num; n++) {
      temp1 = 2 * n;
      e = temp1 * n;
      temp2 = ((2 * m) - 1);
      d = temp2 * temp2;
      f = temp1 * temp2;
      a = d + f;
      b = e + f;
      c = d + e + f;
      i += 1;
      printf("%d: a: %d b: %d c: %d\n", i, a, b, c);
    }
  }
}
