#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 20
#define DG 0.5
#define GG 5
#define PI 3.14

float funkcija(float polje[]) {
   float produkt = 0;
   for (int i = 0; i < MAX - 1; i++) {
      produkt *= i * pow(polje[i], -2) + cos(PI / (polje[i] + 1));
   }
   return MAX * pow(polje[MAX - 1], -3) + produkt;
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