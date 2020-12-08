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

   for (int i = 0; i < m - 1; i++) {
      for (int j = 1 + i; j < m; j++) {
         if (polje[i][j] > 0) printf("%0.2f ", polje[i][j]);
      }
   }

   for (int i = 1; i < m; i++) {
      for (int j = m - 1; j > m - i - 1; j--) {
         if (polje[i][j] > 0) printf("%0.2f ", polje[i][j]);
      }
   }

   return 0;
}