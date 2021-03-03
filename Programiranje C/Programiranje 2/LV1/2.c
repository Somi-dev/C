#include <math.h>
#include <stdio.h>

int main(void) {
   int polje[8];
   int suma = 0;
   int ost = 0;
   _Bool predznak = 0;

   for (int i = 7; i >= 0; i--) {
      scanf("%1d", &polje[i]);
   }

   if (polje[7] == 1) {
      predznak = 1;
   }

   if (predznak) {
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
      if (polje[i] == 1)
         suma += pow(2, i);
   }

   if (predznak)
      printf("Pretvorba u dekadski: %d", -1 * suma);
   else
      printf("Pretvorba u dekadski: %d", suma);

   return 0;
}