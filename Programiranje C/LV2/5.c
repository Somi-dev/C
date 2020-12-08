#include <stdio.h>

int main(void) {
   int n, i = 0, j = 0;
   float postotak;

   printf("Upisite 10 cijelih brojeva: ");
   do {
      scanf("%d", &n);
      i += (n % 2);
      j++;
   } while (j < 10);

   postotak = 100 - (i / 10.f) * 100;

   printf("Postotak parnih brojeva je %0.2f%%", postotak);

   return 0;
}