#include <stdio.h>

float sredina(float *polje, int n) {
   float suma = 0;
   for (int i = 0; i < n; i++) {
      suma += *(polje + i);
   }
   return suma / n;
}

void zamjena(float *polje, int n) {
   float s = sredina(polje, n);
   for (int i = 0; i < n; i++) {
      if (*(polje + i) < s) *(polje + i) = s;
   }
}

int main(void) {
   int n;
   printf("Upisite broj clanova polja <3,16]: ");
   while (scanf("%d", &n), n <= 3 || n > 16) {
      printf("Neispravan broj");
   }

   float polje[n];
   for (int i = 0; i < n; i++) {
      scanf("%f", &polje[i]);
   }

   zamjena(polje, n);

   for (int i = 0; i < n; i++) {
      printf("%0.2f ", polje[i]);
   }

   return 0;
}