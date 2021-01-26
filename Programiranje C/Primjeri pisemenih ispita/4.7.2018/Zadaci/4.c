#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 30
#define DG -10
#define GG 10

float funkcija(float polje[]) {
   float produkt = 0;
   for (int i = 1; i < MAX - 3; i++) {
      produkt *= fabs(polje[i] - polje[i + 1]);
   }
   return exp((polje[0] - polje[MAX - 1]) / 10) + produkt;
}

int main(void) {
   float polje[MAX];

   srand((unsigned int)time(NULL));
   for (int i = 0; i < MAX; i++) {
      polje[i] = (float)rand() / RAND_MAX * (GG - DG) + DG;
   }

   printf("%.2f", funkcija(polje));

   return 0;
}