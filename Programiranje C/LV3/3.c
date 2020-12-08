#include <stdio.h>

int main(void) {
   int poljeA[3][4];
   int poljeB[3][4];
   printf("Unesite elemente 3 x 4 matrice: ");

   for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 4; j++) {
         scanf("%d", &poljeA[i][j]);
      }
   }

   for (int i = 0; i < 3; i++) {
      for (int j = 3; j >= 0; j--) {
         poljeB[i][3 - j] = poljeA[i][j];
      }
   }

   for (int i = 0; i < 3; i++) {
      if (i > 0) printf("\n");
      for (int j = 0; j < 4; j++) {
         printf("%d ", poljeB[i][j]);
      }
   }

   return 0;
}