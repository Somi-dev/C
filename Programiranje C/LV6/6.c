#include <stdio.h>
#define MAX 100

int provjeraSlova(char *niz) {
   int brojVelikih = 0, brojMalih = 0, i = 0;
   while (*(niz + i) != '\0') {
      if (*(niz + i) >= 'A' && *(niz + i) <= 'Z')
         ++brojVelikih;
      else if (*(niz + i) >= 'a' && *(niz + i) <= 'z')
         ++brojMalih;
      ++i;
   }
   if (brojMalih > brojVelikih) {
      return -1;
   } else if (brojVelikih > brojMalih) {
      return 1;
   } else {
      return 0;
   }
}

int main(void) {
   char niz[MAX];
   fgets(niz, MAX, stdin);
   printf("%d", provjeraSlova(niz));
   return 0;
}