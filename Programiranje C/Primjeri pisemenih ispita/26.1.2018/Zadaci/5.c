#include <stdio.h>
#include <stdlib.h>
#define MAX 200

void velikaMala(char *p) {
   int i = 0;
   while (*(p + i) != '\0') {
      if (*(p + i) >= 'a' && *(p + i) <= 'z') {
         *(p + i) -= 'a' - 'A';
      }
      i++;
   }
   printf("%s", p);
}

int main(void) {
   char *p = NULL;
   p = (char *)malloc(MAX + 1 * sizeof(char));
   fgets(p, MAX + 1, stdin);
   velikaMala(p);

   return 0;
}