#include <stdio.h>

int main(void) {
   int n;
   _Bool zastavica = 0;
   printf("Upisite cijeli broj: ");
   scanf("%d", &n);

   for (int i = 2; i < 10; i++) {
      if (i != n && n % i == 0) zastavica = 1;
   }

   if (zastavica) {
      printf("Nije prost broj!");
   } else {
      printf("Broj je prost!");
   }

   return 0;
}