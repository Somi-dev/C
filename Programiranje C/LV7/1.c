#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
   int n;
   double *p = NULL, sum = 0;

   do {
      scanf("%d", &n);
   } while (n < 5);

   p = (double *)malloc(n * sizeof(double));
   if (p == NULL) {
      return 1;
   }
   srand((unsigned int)time(NULL));
   for (int i = 0; i < n; i++) {
      *(p + i) = (double)rand() / RAND_MAX - 1;
      sum += *(p + i);
   }

   for (int i = 0; i < n; i++) {
      if (*(p + i) > sum / n) printf("%f\n", *(p + i));
   }

   free(p);
   return 0;
}
