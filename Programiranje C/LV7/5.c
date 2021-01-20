#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void nasumicnoPolje(double *p, int n) {
   for (int i = 0; i < n; i++) {
      *(p + i) = (double)rand() / RAND_MAX * (20 + 5) - 5;
   }
}

double aritSred(double *p, int n) {
   double sum = 0;
   for (int i = 0; i < n; i++) {
      sum += *(p + i);
   }
   return sum / n;
}

int aritSredUdaljenost(double *p, int n) {
   int index;
   double sredina = aritSred(p, n), najblizi = *p;
   for (int i = 1; i < n; i++) {
      if ((fabs(najblizi - sredina)) > fabs(*(p + i) - sredina)) {
         najblizi = *(p + i);
         index = i;
      }
   }
   return index;
}

int main(void) {
   int n;
   double *p = NULL;

   srand((unsigned int)time(NULL));
   n = rand() % (10000 - 1000 + 1) + 1000;
   p = (double *)malloc(n * sizeof(double));

   nasumicnoPolje(p, n);
   printf("Aritmeticka sredina: %lf", aritSred(p, n));
   printf("\nNajbliza vrijednost arit sredini: %lf", *(p + aritSredUdaljenost(p, n)));
   free(p);

   return 0;
}