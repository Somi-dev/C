#include <math.h>
#include <stdio.h>
#define MAX 10

void funkcija(double *polje) {
   double rez;
   double suma = 0;
   for (int i = 0; i < MAX; i++) {
      suma += fabs(i * pow(*(polje + i + 1), 2) - 1);
   }
   rez = *polje * suma;
   printf("%.2lf", rez);
}

int main(void) {
   double polje[MAX];
   printf("Unesite 10 brojeva u polje: ");
   for (int i = 0; i < MAX; i++) {
      scanf("%lf", &polje[i]);
   }
   funkcija(polje);

   return 0;
}