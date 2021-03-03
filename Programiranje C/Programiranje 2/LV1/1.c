#include <stdio.h>
#include <stdlib.h>

int main(void) {
   int polje[8] = {0};
   int broj, i;
   _Bool predznak = 1;

   while (scanf("%d", &broj), broj < -128 || broj > 127) {
      printf("Neispravan unos!");
   }

   if (broj < 0) {
      predznak = 0;
      broj = abs(broj);
   }

   i = 0;
   while (broj > 0) {
      polje[i] = broj % 2;
      broj /= 2;
      i++;
   }

   int ost = 0;
   if (!predznak) {
      for (int i = 0; i < 8; i++) {
         if (polje[i] == 1)
            polje[i] = 0;
         else
            polje[i] = 1;
      }

      for (int i = 0; i < 8; i++) {
         if (i == 0) {
            polje[i] += 1;
         } else {
            polje[i] += ost;
            ost = 0;
         }
         if (polje[i] == 2) {
            ost = 1;
            polje[i] = 0;
         }
      }
   }

   for (int i = 7; i >= 0; i--) {
      printf("%d", polje[i]);
   }

   return 0;
}