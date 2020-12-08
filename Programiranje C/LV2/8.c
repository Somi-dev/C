#include <stdio.h>

int main(void) {
   int n;

   printf("Upisite cijeli broj: ");
   scanf("%d", &n);

   for (int i = 1; i <= n; i++) {
      if (n % i == 0) printf("%d ", i);
   }

   return 0;
}