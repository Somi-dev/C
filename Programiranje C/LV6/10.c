#include <stdio.h>
#include <string.h>
#define MAX 60

int zbrojASCII(char *niz) {
   int suma = 0;
   while (*niz != '\0') {
      suma += *niz;
      niz++;
   }
   return suma;
}

int main(void) {
   char niz[MAX + 1];
   fgets(niz, MAX + 1, stdin);
   if (zbrojASCII(niz) % strlen(niz) == 0) {
      printf("Zbroj ASCII vrijednosti niza je djeljiv s duljinom stringa");
   } else {
      printf("Zbroj ASCII vrijednosti niza nije djeljiv s duljinom stringa");
   }
   return 0;
}
