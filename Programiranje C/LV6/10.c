#include <stdio.h>
#include <string.h>
#define MAX 60

int zbrojASCII(char *niz) {
   int suma = 0;
   for (int i = 0; i < strlen(niz); i++) {
      suma += *(niz + i);
   }
   return suma;
}

int main(void) {
   char niz[MAX + 1];
   fgets(niz, MAX + 1, stdin);
   if (zbrojASCII(niz) % strlen(niz) == 0) {
      printf("Zbroj ASCII vrijednosti niza je djeljiv s duljinom stringa");
   } else {
      printf("Zbroj ASCII vrijednosti niza je djeljiv s duljinom stringa");
   }
   return 0;
}