#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 120
#define DG -10
#define GG 10

void izmjeniPolje(double *p, int n) {
   double suma;
   int i, j;
   printf("Izmjenjeno: \n");
   for (i = 0; i < n; i++) {
      suma = 0;
      for (j = 1; j < n; j++) {
         suma += *(p + j);
      }
      *(p + i) = suma / (n - i + 1);
      printf("%.2f\n", *(p + i));
   }
}

int main(void) {
   double *p = NULL;
   p = (double *)malloc(MAX * sizeof(double));
   if (p == NULL) {
      exit(0);
   }

   srand((unsigned int)time(NULL));
   for (int i = 0; i < MAX; i++) {
      *(p + i) = (double)rand() / RAND_MAX * (GG - DG) + DG;
      printf("%0.2f\n", *(p + i));
   }

   izmjeniPolje(p, MAX);

   free(p);

   return 0;
}