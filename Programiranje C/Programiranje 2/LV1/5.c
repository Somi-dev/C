#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
   int polje[32] = {0};
   double broj;
   int be = 0;
   int predznak = 0;
   int karakteristika = 0;

   while (scanf("%lf", &broj), fabs(broj) < 2.000) {
      printf("Neispravan unos!");
   }

   if (broj < 0) {
      broj = fabs(broj);
      predznak = 1;
   }
   polje[32] = predznak;

   while (broj > 2) {
      broj /= 2;
      be++;
   }

   karakteristika = be + 127;
   for (int i = 23; i <= 30; i++) {
      polje[i] = karakteristika % 2;
      karakteristika /= 2;
   }
   broj -= 1;
   for (int i = 22; i > 0; i--) {
      broj *= 2;
      if (broj >= 1) {
         broj -= 1;
         polje[i] = 1;
      } else {
         polje[i] = 0;
      }
   }

   for (int i = 31; i >= 0; i--) {
      printf("%d", polje[i]);
      if (i == 31 || i == 23) printf(" ");
   }
   return 0;
}