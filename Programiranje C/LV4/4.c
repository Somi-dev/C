#include <stdio.h>
#include <string.h>
#define MAX 100

int main(void) {
   char str[MAX];
   char copy[MAX];
   fgets(str, MAX, stdin);
   int i;
   for (i = 0; i < strlen(str) - 1; i++) {
      copy[i] = str[strlen(str) - (i + 2)];
   }
   copy[i] = '\0';

   printf("%s", copy);

   return 0;
}