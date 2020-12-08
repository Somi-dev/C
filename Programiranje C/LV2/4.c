#include <stdio.h>

int main(void) {
   unsigned int n;

   printf("Unesite jedan prirodan broj: ");
   scanf("%u", &n);

   while (n != 0) {
      printf("%d", n % 10);
      n /= 10;
      if (n != 0) {
         printf("__");
      }
   }

   return 0;
}