#include <stdio.h>
#include <string.h>
#define MAX 200

int main(void) {
   char niz1[MAX];
   char niz2[MAX];
   fgets(niz1, MAX, stdin);
   char znak = niz1[0];

   int j = 0;
   for (int i = 0; i < strlen(niz1); i++) {
      if (niz1[i] != znak) {
         niz2[j] = niz1[i];
         j++;
      }
   }
   niz2[j] = '\0';
   printf("%s", niz2);

   return 0;
}