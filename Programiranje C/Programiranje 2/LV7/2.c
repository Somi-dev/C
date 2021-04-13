#include <stdio.h>
#include <stdlib.h>

int main(void) {
   FILE *tok1 = NULL;
   FILE *tok2 = NULL;
   int n, m;

   tok1 = fopen("in.txt", "r");
   tok2 = fopen("out.txt", "w");
   fscanf(tok1, "%d %d", &n, &m);

   float **A = calloc(n, sizeof(float *));
   for (int i = 0; i < n; i++) {
      *(A + i) = calloc(m, sizeof(float));
   }

   for (int i = 0; i < n - 1; i++) {
      for (int j = 1; j < m; j++) {
         scanf("%f", *(A + i) + j);
         fprintf(tok2, "%.2f\t", *(*(A + i) + j));
      }
      fprintf(tok2, "\n");
   }
   fclose(tok1);
   fclose(tok2);
   return 0;
}