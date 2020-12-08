#include <stdio.h>
#include <string.h>
#define MAX 180

int main(void) {
   char niz1[MAX];
   char niz2[MAX];
   fgets(niz1, MAX, stdin);

   int i = 0;
   while (niz1[i] != '\0') {
      if (niz1[i] == ':') break;
      i++;
   }
   int j;
   for (j = 0; j < strlen(niz1) - i; j++) {
      niz2[j] = niz1[i + j];
   }
   niz2[j] = '\0';
   printf("%s", niz2);

   return 0;
}