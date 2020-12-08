#include <stdio.h>
#include <stdlib.h>

int main(void) {
   float polje[12];
   int suma = 0;
   float sredina;

   printf("Unesite 12 cijelih brojeva: ");
   for (int i = 0; i < 12; i++) {
      scanf("%f", &polje[i]);
      suma += abs(polje[i]);
   }

   sredina = (suma * 1.f) / 12;

   for (int i = 0; i < 12; i++) {
      if (polje[i] > 0) {
         polje[i] = sredina;
      }
   }

   for (int i = 0; i < 12; i++) {
      printf("%.2f\n", polje[i]);
   }

   return 0;
}