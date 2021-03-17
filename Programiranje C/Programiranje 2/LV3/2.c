#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int funk(int **matrica, int n, int m) {
   int max = 0;
   max = **matrica;
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
         if (*(*(matrica + i) + j) > max)
            max = *(*(matrica + i) + j);
      }
   }
   return max;
}

int main(void) {
   int **matrica;
   int m, n;
   srand((unsigned int)time(NULL));
   printf("Unesite dimenzije matrice: ");
   while (scanf("%d %d", &n, &m), (n < 2 || n > 5) || (m < 2 || m > 8)) {
      printf("Neispravan unos!");
   }

   matrica = (int **)calloc(n, sizeof(int *));
   if (matrica == NULL) {
      return 1;
   }

   for (int i = 0; i < n; i++) {
      *(matrica + i) = (int *)calloc(m, sizeof(int));
      if (*(matrica + i) == NULL) {
         return 1;
      }
   }

   for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
         *(*(matrica + i) + j) = rand() % (99 - 0 + 1);
      }
   }

   for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
         printf("%4d", *(*(matrica + i) + j));
      }
      printf("\n");
   }
   printf("\nNajveca vrijednost matrice je: %d", funk(matrica, n, m));

   for (int i = 0; i < n; i++) {
      free(*(matrica + i));
   }

   free(matrica);

   return 0;
}