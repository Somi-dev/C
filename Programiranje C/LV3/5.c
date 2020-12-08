#include <stdio.h>

int main(void) {
   int q;
   printf("Unesite velicinu polja (5 < q <= 12): ");
   scanf("%d", &q);

   float polje[q];

   for (int i = 0; i < q; i++) {
      scanf("%f", &polje[i]);
   }

   for (int i = 0; i < q; i++) {
      if (i % 2 == 0) {
         polje[i] /= 10;
      } else {
         polje[i] /= -10;
      }
   }

   for (int i = 0; i < q; i++) {
      printf("%0.2f ", polje[i]);
   }

   return 0;
}