#include <stdio.h>
#include <string.h>
#define MAX 30

int main(void) {
   int i;
   char str[MAX] = "Je li moguce?";

   strcpy(str, "Kako da ne, kako da!");

   //ispis stringa na ekran
   for (i = 0; i < strlen(str); i++) {
      printf("%c", str[i]);
   }

   return 0;
}