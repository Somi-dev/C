#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int slovaZnakovi(char *p) {
   int slova, znamenke, i;
   slova = znamenke = i = 0;
   while (*(p + i) != '\0') {
      if ((*(p + i) >= 'a' && *(p + i) <= 'z') || (*(p + i) >= 'A' && *(p + i) <= 'Z')) {
         slova++;
      }
      if ((*(p + i) >= '0' && *(p + i) <= '9')) {
         znamenke++;
      }
      i++;
   }
   if (znamenke > slova)
      return 1;
   else
      return 0;
}

int main(void) {
   char *p = NULL;
   p = (char *)malloc(MAX + 1 * sizeof(char));
   if (p == NULL) {
      return EXIT_FAILURE;
   }
   fgets(p, MAX + 1, stdin);
   printf("%d", slovaZnakovi(p));
   free(p);

   return 0;
}