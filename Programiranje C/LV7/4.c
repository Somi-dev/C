#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void nasumicnoPolje(float *p, int t) {
   for (int i = 0; i < t; i++) {
      *(p + i) = (float)rand() / RAND_MAX * -10.0;
   }
}

float minMaksRaz(float *p, int t) {
   float min, max;
   min = max = *p;
   for (int i = 1; i < t; i++) {
      min = min > *(p + i) ? *(p + i) : min;
      max = max < *(p + i) ? *(p + i) : max;
   }
   return fabs(max - min);
}

int main(void) {
   int n, t;
   float *p = NULL;
   srand((unsigned int)time(NULL));

   printf("Upisite broj clanova polja <5,20]: ");
   while (scanf("%d", &n), n <= 5 || n > 20) {
      printf("Neispravan broj");
   }

   for (int i = 0; i < n; i++) {
      t = (rand() % (1000 - 10 + 1)) + 10;
      p = (float *)malloc(t * sizeof(float));
      nasumicnoPolje(p, t);
      printf("%f\n", minMaksRaz(p, t));
      free(p);
   }

   return 0;
}