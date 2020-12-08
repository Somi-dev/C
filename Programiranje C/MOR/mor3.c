#include <stdio.h>
#define DULJINA_BROJA 6

int main(void) {
   int n, brojevi;

   printf("Upisite broj mobitela: ");

   while (scanf("%d", &n), n < 100000 || n > 999999) {
      printf("Neispravan broj!\n");
   }

   printf("Koliko imate brojeva u imeniku: ");
   scanf("%d", &brojevi);

   int imenik[brojevi];

   printf("Upisite ih:\n");
   printf("------\n%d\n------\n", n);

   for (int i = 0; i < brojevi; i++) {
      while (scanf("%d", &imenik[i]), imenik[i] < 100000 || imenik[i] > 999999) {
         printf("Neispravan broj!\n");
      }
   }

   int slicnost[DULJINA_BROJA];
   for (int i = 0; i < DULJINA_BROJA; i++) {
      slicnost[i] = 0;
   }

   for (int i = 0; i < brojevi; i++) {
      int j = 0;
      int x = 100000;
      while (x != 0) {
         if (imenik[i] / x == n / x) {
            ++slicnost[j++];
         } else {
            slicnost[j++];
         }
         x /= 10;
      }
   }

   for (int i = 0; i < DULJINA_BROJA; i++) {
      printf("%d", slicnost[i]);
      if (i != DULJINA_BROJA - 1) printf("\n");
   }
   if (slicnost[DULJINA_BROJA - 1] >= 1) {
      printf(" <-- Broj se nalazi u imeniku!");
   } else {
      printf(" <-- Broj se ne nalazi u imeniku!");
   }

   return 0;
}