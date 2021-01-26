#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
   int m, n;

   printf("Unesite m x n: ");
   while (scanf("%d %d", &m, &n), (m < 10 || m >= 19) || (n < 11 || n > 20)) {
      printf("Neispravan unos\n");
   }

   float polje[m][n];

   srand((unsigned int)time(NULL));

   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         polje[i][j] = (float)rand() / RAND_MAX * (20 + 10) - 10;
         printf("%5.2f ", polje[i][j]);
      }
      printf("\n");
   }

   float max, suma = 0;
   for (int j = 0; j < n; j++) {
      max = polje[0][j];
      for (int i = 0; i < m; i++) {
         if (polje[i][j] > max) max = polje[i][j];
      }
      suma += max;
   }

   printf("Zbroj najvecih vrijednosti stupaca je: %0.2f", suma);

   return 0;
}