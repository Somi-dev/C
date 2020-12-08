#include <stdio.h>

int main(void) {
   int m;
   scanf("%d", &m);
   float polje[m][m];

   for (int i = 0; i < m; i++) {
      for (int j = 0; j < m; j++) {
         scanf("%f", &polje[i][j]);
      }
   }

   float minS = polje[0][0];
   float minG = polje[m][m];

   for (int i = 0; i < m - 1; i++) {
      for (int j = 1; j < m - i - 1; j++) {
         if (polje[i][j] < minS) minS = polje[i][j];
      }
   }

   for (int i = m - 1; i > 0; i--) {
      for (int j = m - 1; j > m - i - 1; j--) {
         if (polje[i][j] < minG) minG = polje[i][j];
      }
   }

   printf("%.2f %.2f", minS, minG);

   return 0;
}