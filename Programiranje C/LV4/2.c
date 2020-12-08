#include <stdio.h>
#include <string.h>
#define MAX 80

int main(void) {
   char str[MAX];
   fgets(str, MAX, stdin);
   int rez = 0;

   for (int i = 0; i < strlen(str); i++) {
      if (str[i] == 'm' && str[i + 1] == 'a') {
         rez++;
         i++;
      }
   }

   printf("Broj ponavljanja je: %d", rez);

   return 0;
}