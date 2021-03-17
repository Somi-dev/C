#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mnozenje(int **matrica, int n, int m, int k) {
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
         *(*(matrica + i) + j) *= k;
      }
   }
}

int main(void) {
   int **matrica = NULL;
   int n, m, k;

   srand((unsigned int)time(NULL));

   while (scanf("%d %d", &n, &m), (n < 2 || n > 10) || (m < 2 || m > 10)) {
      printf("Neispravan unos");
   }

   printf("Unesite cijeli broj k: ");
   scanf("%d", &k);

   matrica = (int **)calloc(n, sizeof(int *));
   if (matrica == NULL) {
      return 1;
   }

   for (int i = 0; i < n; i++) {
      *(matrica + i) = (int *)calloc(m, sizeof(int));
      if (*(matrica + i) == NULL) return 1;
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

   mnozenje(matrica, n, m, k);

   printf("\n");
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
         printf("%4d", *(*(matrica + i) + j));
      }
      printf("\n");
   }

   for (int i = 0; i < n; i++) {
      free(*(matrica + i));
   }

   free(matrica);

   return 0;
}