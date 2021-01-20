#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 50

void pretvorba(char *p) {
   int i = 0;
   srand((unsigned int)time(NULL));
   while (*(p + i) != '\0') {
      if ((*(p + i) < 'a' || *(p + i) > 'z') && (*(p + i) < 'A' || *(p + i) > 'Z')) {
         if (rand() % 2) {
            *(p + i) = rand() % ('z' - 'a' + 1) + 'a';
         } else {
            *(p + i) = rand() % ('Z' - 'A' + 1) + 'A';
         }
      }
      i++;
   }
}

int main(void) {
   char *p = NULL;

   p = (char *)malloc(MAX * sizeof(char));
   if (p == NULL) {
      exit(0);
   }
   fgets(p, MAX + 1, stdin);
   printf("%s\n", p);
   pretvorba(p);
   printf("%s", p);
   free(p);
   return 0;
}