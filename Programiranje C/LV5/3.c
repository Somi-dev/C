#include <stdio.h>

int divisorCount(int num) {
   int dc = 0, d;
   for (d = 1; d <= num; d++)
      if (num % d == 0)
         ++dc;

   return dc;
}

int main(void) {
   int broj;
   printf("Upisite cijeli broj: ");
   scanf("%d", &broj);
   printf("Broj pozitivnih dijeljitelja je: %d", divisorCount(broj));

   return 0;
}