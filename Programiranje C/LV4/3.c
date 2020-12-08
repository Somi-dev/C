#include <stdio.h>
#include <string.h>
#define MAX 120

int main(void) {
   char str[MAX];
   fgets(str, MAX, stdin);
   int mala = 0;
   int velika = 0;

   for (int i = 0; i < strlen(str); i++) {
      if (str[i] >= 65 && str[i] <= 90)
         mala++;
      else if (str[i] >= 97 && str[i] <= 122)
         velika++;
   }

   printf("Mala slova: %d\nVelika slova: %d", mala, velika);
   return 0;
}