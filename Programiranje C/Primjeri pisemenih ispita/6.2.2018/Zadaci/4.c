#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 30
#define DG -1.25
#define GG 1.25

float funkcija(float polje[]) {
   float suma = 0;
   for (int i = 0; i < MAX - 1; i++) {
      suma += 2 * pow(polje[i], 2);
   }
   return 10 * pow(polje[0] - 1, 2) - suma;
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