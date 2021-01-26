#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DG 5
#define GG 50

int main(void) {
   int m, n;
   while (scanf("%d %d", &m, &n), (m <= 17 || m > 30) || (n < 7 || n > 12)) {
      printf("Neispravan unos!");
   }

   float polje[m][n];

   srand((unsigned int)time(NULL));
   int maxI, maxJ;
   float max = 0;
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         polje[i][j] = (float)rand() / RAND_MAX * (GG - DG) + DG;
         if (polje[i][j] > max) {
            max = polje[i][j];
            maxI = i;
            maxJ = j;
         }
      }
   }

   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         if (i == maxI && polje[i][j] != max) polje[i][j] = 1;
         if (j == maxJ && polje[i][j] != max) polje[i][j] = -1;
         printf("%6.2f", polje[i][j]);
      }
      printf("\n");
   }

   return 0;
}