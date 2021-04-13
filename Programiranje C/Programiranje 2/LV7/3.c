#include <stdio.h>
#include <stdlib.h>

int main(void) {
   FILE *tok1 = NULL;
   FILE *tok2 = NULL;
   int c;

   tok1 = fopen("Prva.txt", "r");
   tok2 = fopen("Druga.txt", "w");

   while ((c = fgetc(tok1)) != EOF) {
      if (c >= 'a' && c <= 'z') c -= 32;
      fprintf(tok2, "%c", c);
   }
   fclose(tok1);
   fclose(tok2);
   return 0;
}