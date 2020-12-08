#include <stdio.h>

int main(void) {
   int m;
   float x;
   printf("Unesite dimenziju kvadratne matrice (3 <= m < 9):\n");
   scanf("%d", &m);
   float polje[m][m];

   for (int i = 0; i < m; i++) {
      for (int j = 0; j < m; j++) {
         scanf("%f", &polje[i][j]);
      }
   }

   printf("Upisite x (0 < x <= 1): ");
   scanf("%f", &x);

   for (int i = 0; i < m; i++) {
      polje[i][m - i - 1] *= x;
      polje[i][i] = polje[i][m - i - 1];
   }

   for (int i = 0; i < m; i++) {
      if (i > 0) printf("\n");
      for (int j = 0; j < m; j++) {
         printf("%0.2f ", polje[i][j]);
      }
   }

   return 0;
}