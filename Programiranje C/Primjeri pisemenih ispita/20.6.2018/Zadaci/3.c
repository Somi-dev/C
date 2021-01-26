#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
#define GG 12500
#define DG -1500

long int aritSredZnamenki(long int a) {
   float suma = 0, brojZnamenki = 0;
   while (a > 0) {
      suma += a % 10;
      a /= 10;
      brojZnamenki++;
   }
   return suma / brojZnamenki;
}

long int maxAritSredZnamenki(long int *p) {
   long int sredina, max = 0;
   int i, j;
   for (i = 0; i < MAX; i++) {
      sredina = aritSredZnamenki(*(p + i));
      if (sredina > max) {
         max = sredina;
         j = i;
      }
   }
   return *(p + j);
}

int main(void) {
   long int *p = NULL;
   p = (long int *)malloc(MAX * sizeof(long int));
   if (p == NULL) {
      return EXIT_FAILURE;
   }

   srand((unsigned int)time(NULL));
   for (int i = 0; i < MAX; i++) {
      *(p + i) = rand() % (GG - DG + 1) + DG;
   }
   printf("%ld", maxAritSredZnamenki(p));
   free(p);
   return 0;
}