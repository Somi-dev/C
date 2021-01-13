#include <stdio.h>

void zamjenaElemenata(float *polje, int n) {
   for (int i = 0; i < n / 2; i++) {
      *(polje + i) += *(polje + n - i - 1);
      *(polje + n - i - 1) = *(polje + i) - *(polje + n - i - 1);
      *(polje + i) -= *(polje + n - i - 1);
   }
}

int main(void) {
   int n;
   printf("Upisite broj clanova polja <5,11>: ");
   while (scanf("%d", &n), n <= 5 || n >= 11) {
      printf("Neispravan broj");
   }

   float polje[n];
   for (int i = 0; i < n; i++) {
      scanf("%f", &polje[i]);
   }

   for (int i = 0; i < n; i++) {
      printf("%f ", polje[i]);
   }
   printf("\n");

   zamjenaElemenata(polje, n);

   for (int i = 0; i < n; i++) {
      printf("%f ", polje[i]);
   }

   return 0;
}