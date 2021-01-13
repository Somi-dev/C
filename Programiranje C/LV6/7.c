#include <limits.h>
#include <stdio.h>
#define MAX 6

int parsiranje(char *niz) {
   int suma = 0, predznak = 1;
   _Bool provjera = 0;
   if (*niz == '-') {
      predznak *= -1;
      niz++;
      provjera = 1;
   } else if ((*niz >= '0') && (*niz <= '9')) {
      provjera = 1;
   }
   if (provjera) {
      while ((*niz >= '0') && (*niz <= '9')) {
         suma = (suma * 10) + ((*niz) - '0');
         niz++;
      }
      return predznak * suma;
   }
   return INT_MAX;
}

int main(void) {
   char niz[MAX + 1];
   fgets(niz, MAX + 1, stdin);
   printf("%d", parsiranje(niz));
   return 0;
}