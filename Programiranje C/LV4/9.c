#include <stdio.h>
#include <string.h>
#define MAX 80

int main(void) {
   char str[MAX];
   fgets(str, MAX, stdin);

   char znak;
   scanf("%c", &znak);
   float suma = 0;
   float sredina;

   for (int i = 0; i < strlen(str); i++) {
      suma += str[i];
   }

   sredina = suma / strlen(str);
   for (int i = 0; i < strlen(str); i++) {
      if (str[i] < sredina) str[i] = znak;
   }

   printf("%s", str);
   return 0;
}