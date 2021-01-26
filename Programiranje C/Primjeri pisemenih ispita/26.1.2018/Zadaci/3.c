#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void popuniPolje(long int *p, int n) {
   srand((unsigned int)time(NULL));
   for (int i = 0; i < n; i++) {
      *(p + i) = rand() % (750 + 750 + 1) - 750;
   }
}

int provjeraProdukta(long int *p, int n) {
   int max = *p, produkt, maxProdukt = 1;
   for (int i = 0; i < n; i++) {
      if (*(p + i) > max) max = *(p + i);
   }

   while (max > 0) {
      maxProdukt *= max % 10;
      max /= 10;
   }

   for (int i = 0; i < n; i++) {
      produkt = 1;
      while (*(p + i) > 0) {
         produkt *= *(p + i) % 10;
         *(p + i) /= 10;
      }
      if (produkt > maxProdukt) {
         printf("%d %d\n", produkt, maxProdukt);
         return -1;
      }
   }
   printf("%d %d\n", produkt, maxProdukt);
   return 0;
}
int main(void) {
   long int *p = NULL;
   p = (long int *)malloc(204 * sizeof(long int));
   popuniPolje(p, 204);
   printf("%d", provjeraProdukta(p, 204));
   return 0;
}