#include <stdio.h>

int main(void) {
   char a, b, c, min;

   printf("Upisite tri znaka: ");
   scanf("%c %c %c", &a, &b, &c);

   min = a;
   if (b < min) {
      min = b;
   } else if (c < min) {
      min = c;
   }

   printf("Najmanji ASCII znak je: %c %hhd\n", min, min);

   if (a != min) {
      printf("%hhx ", a - min);
   }
   if (b != min) {
      printf("%hhx ", b - min);
   }
   if (c != min) {
      printf("%hhx", c - min);
   }
   return 0;
}