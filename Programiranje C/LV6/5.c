#include <stdio.h>

int main(void) {
   int n, suma, temp, max = 0, *p = NULL;

   printf("Upisite broj clanova polja<3,18]: ");
   while (scanf("%d", &n), n <= 3 || n > 18) {
      printf("Neispravan broj");
   }

   int polje[n];
   p = polje;

   for (int i = 0; i < n; i++) {
      scanf("%d", p + i);
      suma = 0;
      temp = *(p + i);
      while (*(p + i) != 0) {
         suma += *(p + i) % 10;
         *(p + i) /= 10;
      }
      max = max < suma ? temp : max;
   }

   printf("Najveci zbroj znamenaka ima broj: %d", max);

   return 0;
}