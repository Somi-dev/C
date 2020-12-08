#include <stdio.h>
#include <string.h>
#define MAX 220

int main(void) {
   char str[MAX];
   fgets(str, MAX, stdin);
   float suma = 0;
   float sredina;

   for (int i = 0; i < strlen(str); i++) {
      if (str[i] != ' ' && str[i] != '.') suma += str[i];
   }

   sredina = suma / strlen(str);
   printf("Srednja vrijednost znakova: %.2f", sredina);
   return 0;
}