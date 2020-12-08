#include <stdio.h>
#define G 20

int main(void) {
   int polje[G];
   int brojac[10] = {0};

   for (int i = 0; i < G; i++) {
      while (scanf("%d", &polje[i]), polje[i] < 0 || polje[i] > 9) {
         printf("Neispravan broj!\n");
      }
   }

   for (int i = 0; i < G; i++) {
      brojac[polje[i]] += 1;
   }

   for (int i = 0; i < 10; i++) {
      printf("%d: %d\n", i, brojac[i]);
   }

   return 0;
}