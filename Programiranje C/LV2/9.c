#include <stdio.h>

int main(void) {
   int a, b, c;

   printf("Upisite stranice trokuta: ");
   scanf("%d %d %d", &a, &b, &c);

   if (a + b > c && b + c > a && a + c > b) {
      if (a == b && a == c && b == c) {
         printf("Trokut je jednakostranican");
      } else if (a == c || a == b || b == c) {
         printf("Trokut je jednakokracan");
      } else {
         printf("Trokut je raznostranican");
      }
   } else {
      printf("Nejednakost trokuta nije zadovoljena!");
   }

   return 0;
}