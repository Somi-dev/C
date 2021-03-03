#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
   int polje[32];
   int suma = 0;
   int ost = 0;
   _Bool predznak = 0;

   srand((unsigned int)time(NULL));
   for (int i = 31; i >= 0; i--) {
      polje[i] = rand() % (1 - 0 + 1) + 0;
   }

   if (polje[32] == 1) {
      predznak = 1;
   }

   if (predznak) {
      for (int i = 0; i < 32; i++) {
         if (polje[i] == 1)
            polje[i] = 0;
         else
            polje[i] = 1;
      }

      for (int i = 0; i < 32; i++) {
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

   for (int i = 31; i >= 0; i--) {
      if (polje[i] == 1)
         suma += pow(2, i);
   }

   if (predznak)
      printf("Pretvorba u dekadski: %d", -1 * suma);
   else
      printf("Pretvorba u dekadski: %d", suma);

   return 0;
}