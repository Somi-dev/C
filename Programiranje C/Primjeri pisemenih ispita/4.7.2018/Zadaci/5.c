#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 58

void skracenica(char *p) {
   int i = 0, j = 1;
   while (*(p + i) != '\0') {
      if ((*(p + i) == ' ' && *(p + i + 2) != ' ') || *(p + i) == ',') {
         *(p + j) = *(p + i + 1);
         j++;
      }
      i++;
   }

   *(p + j) = '\0';
   printf("%s", p);
}

int main(void) {
   char *p = NULL;
   p = (char *)malloc(MAX + 1 * sizeof(char));
   fgets(p, MAX + 1, stdin);
   skracenica(p);

   return 0;
}