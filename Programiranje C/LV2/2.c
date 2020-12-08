#include <stdio.h>

int main(void) {
   int n;
   do {
      printf("Upisite cijeli broj u intervalu [5, 25]: ");
      scanf("%d", &n);
   } while (n < 5 || n > 25);

   for (int i = 1; i <= n; i++) {
      if (i != 1)
         printf("\n");
      for (int j = 0; j < i; j++) {
         printf("*");
      }
   }

   return 0;
}