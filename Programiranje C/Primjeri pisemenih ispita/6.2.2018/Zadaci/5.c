#include <stdio.h>
#include <stdlib.h>
#define MAX 151

char najcesciZnak(char *p) {
   char znak;
   int brojac, maxZnak = 1;
   for (int i = 0; *(p + i) != '\0'; i++) {
      brojac = 0;
      for (int j = 0; *(p + j) != '\0'; j++) {
         if (*(p + i) == *(p + j)) brojac++;
      }
      if (brojac > maxZnak) {
         znak = *(p + i);
         maxZnak = brojac;
      }
   }
   if (maxZnak == 1) {
      return *p;
   }
   return znak;
}

int main(void) {
   char *p = NULL;
   p = (char *)malloc(MAX + 1 * sizeof(char));
   if (p == NULL) {
      exit(0);
   }

   fgets(p, MAX + 1, stdin);
   printf("%c", najcesciZnak(p));

   free(p);
   return 0;
}