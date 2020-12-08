#include <stdio.h>
#include <string.h>
#define MAX 60

int max(int a, int b) {
   return (a > b) ? a : b;
}

int main(void) {
   char str[MAX];
   fgets(str, MAX, stdin);
   int samog = 0;
   int r;

   int i = 0;
   while (str[i] != '\0') {
      if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
          str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
          str[i] == 'o' || str[i] == 'u') {
         samog++;
      }
      i++;
   }

   r = max(32, 2 * samog);

   for (int i = 0; i < strlen(str); i++) {
      if (str[i] > r) str[i] = r;
   }

   printf("%s", str);

   return 0;
}