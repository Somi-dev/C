#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DG 0
#define GG 255

int main(void) {
   int m;
   while (scanf("%d", &m), m <= 5 || m >= 25 || m % 2 == 0) {
      printf("Neispravan unos!");
   }

   float polje[m][m];

   srand((unsigned int)time(NULL));
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < m; j++) {
         polje[i][j] = rand() % (GG - DG + 1) + DG;
      }
   }

   int s = m / 2 + 1;
   polje[s][s] = (polje[s - 1][s - 1] + polje[s - 1][s] + polje[s - 1][s + 1] + polje[s - 1][s - 1]);

   return 0;
}