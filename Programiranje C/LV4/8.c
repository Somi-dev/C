#include <stdio.h>
#define MAX 20

int main(void) {
   char niz1[MAX + 1];
   printf("Upisite 1. niz > ");
   fgets(niz1, MAX + 1, stdin);

   int i = 0;
   while (niz1[i] != '\0') {
      if (niz1[i] == '\n') {
         niz1[i] = '\0';
      }
      i++;
   }

   char niz2[MAX + 1];
   printf("Upisite 2. niz > ");
   fgets(niz2, MAX + 1, stdin);

   i = 0;
   while (niz2[i] != '\0') {
      if (niz2[i] == '\n') {
         niz2[i] = '\0';
      }
      i++;
   }

   char niz3[MAX + MAX + 1];
   int ind3;
   i = ind3 = 0;
   while (niz1[i] != '\0') {
      niz3[ind3] = niz1[i];
      ind3++;
      i++;
   }
   /* dopisati niz2 na kraj niza niz3 */
   i = 0;
   while (niz2[i] != '\0') {
      niz3[ind3] = niz2[i];
      ind3++;
      i++;
   }
   /* na kraj niza niz3 upisati \0 */
   niz3[ind3] = '\0';
   printf("%s", niz3);
   return 0;
}