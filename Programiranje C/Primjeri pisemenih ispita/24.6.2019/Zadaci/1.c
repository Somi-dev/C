#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DG -9
#define GG 9

int main(void) {
   int m, x;
   while (scanf("%d", &m), m <= 15 || m > 32) {
      printf("Neispravan unos!");
   }

   int polje[m][m];

   srand((unsigned int)time(NULL));
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < m; j++) {
         polje[i][j] = rand() % (GG - DG + 1) + DG;
         printf("%d ", polje[i][j]);
      }
      printf("\n");
   }

   while (scanf("%d", &x), x < -9 || x > 9) {
      printf("Neispravan unos!");
   }

   printf("\nIzmjenjeno\n");
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < m; j++) {
         if (polje[i][j] == x) {
            for (int k = j; k < m; k++) {
               polje[i][k] = polje[i][k + 1];
            }
            polje[i][m - 1] = 0;
         }
         printf("%d ", polje[i][j]);
      }
      printf("\n");
   }

   return 0;
}