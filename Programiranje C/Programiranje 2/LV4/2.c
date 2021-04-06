#include <stdio.h>

struct artikl {
   char ime[50];
   float cijena;
   int kolicina;
} u[9];

int main(void) {
   int n;

   float maxCijena = 0;
   struct artikl *max;
   max = &u;

   scanf("%d", &n);
   for (int i = 0; i < n; i++) {
      scanf("%49s", &u[i].ime);
      scanf("%f", &u[i].cijena);
      scanf("%d", &u[i].kolicina);
      if (max->cijena > maxCijena) {
         maxCijena = max->cijena;
      }
   }

   printf("cijena: %.2f, kolicina: %d", max->cijena, max->kolicina);

   return 0;
}