#include <stdio.h>
#include <string.h>
#define MAX 110

int main(void) {
   char str[MAX];
   fgets(str, MAX, stdin);

   for (int i = 0; i < strlen(str); i++) {
      if (str[i] >= 97 && str[i] <= 122)
         str[i] -= 32;
   }

   printf("%s", str);

   return 0;
}