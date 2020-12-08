#include <stdio.h>

int main(void) {
   double p[10] = {1.2, -2.5, 4.2, -4.5, 1.9, 1.3, 3.3};
   int i;
   int n = 10;

   for (i = 0; i <= n; i++) {
      printf("%f\n", p[i] * p[i]);
   }

   return 0;
}