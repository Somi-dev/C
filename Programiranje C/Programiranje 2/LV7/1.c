#include <stdio.h>

int main(void) {
   FILE *tok1 = NULL;
   FILE *tok2 = NULL;
   int n;

   char ime[20];
   char prezime[20];

   tok1 = fopen("Dat.txt", "r");
   tok2 = fopen("Studenti.txt", "w");
   fscanf(tok1, "%d", &n);
   for (int i = 0; i < n; i++) {
      gets(ime);
      gets(prezime);
      fprintf(tok2, "%s %s\n", ime, prezime);
   }
   fclose(tok1);
   fclose(tok2);
   return 0;
}