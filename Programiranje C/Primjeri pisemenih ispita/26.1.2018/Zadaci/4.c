#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

float funkcija(float polje[]) {
   float suma = 0;
   for (int i = 1; i < MAX - 1; i++) {
      suma += pow(polje[i], -2) + 0.1;
   }
   return 1 - polje[0] + suma + polje[MAX - 1];
}

int main(void) {
   float polje[MAX];
   srand((unsigned int)time(NULL));
   for (int i = 0; i < MAX; i++) {
      polje[i] = (float)rand() / RAND_MAX * (5.2 + 5.2) - 5.2;
      printf("%0.2f\n", polje[i]);
   }
   printf("%0.2f", funkcija(polje));
   return 0;
}