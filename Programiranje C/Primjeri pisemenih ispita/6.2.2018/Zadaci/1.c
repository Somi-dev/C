#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
   int m;
   float suma;
   while (scanf("%d", &m), m < 10 || m >= 19) {
      printf("Neispravan unos!");
   }

   float polje[m][m];

   srand((unsigned int)time(NULL));
   for (int i = 0; i < m; i++) {
      suma = 0;
      for (int j = 0; j < m; j++) {
         polje[i][j] = (float)rand() / RAND_MAX * (5 + 5) - 5;
         suma += polje[i][j];
      }
      if (polje[i][i] > suma / m)
         polje[i][i] = 1;
      else
         polje[i][i] = 0;
   }

   for (int i = 0; i < m; i++) {
      for (int j = 0; j < m; j++) {
         printf("%5.2f ", polje[i][j]);
      }
      printf("\n");
   }

   return 0;
}