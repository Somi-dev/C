#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
   int polje[32] = {0};
   int broj;
   int suma = 0;
   int ost = 0;
   _Bool predznak = 0;

   srand((unsigned int)time(NULL));
   broj = rand() % (32768 + 32767 + 1) - 32767;

   if (broj < 0) {
      predznak = 1;
      broj = abs(broj);
   }

   int i = 0;
   while (broj > 0) {
      polje[i] = broj % 2;
      broj /= 2;
      i++;
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
      printf("%d", polje[i]);
   }

   return 0;
}