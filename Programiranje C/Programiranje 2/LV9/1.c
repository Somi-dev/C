#include <stdio.h>
int cnt = 1;
void piramida(unsigned int n) {
   if (n == 0) {
      return;
   }
   for (int i = 0; i < n; i++) {
      printf(" ");
   }
   for (int i = 0; i < cnt; i++) {
      printf("*");
   }
   printf("  %d", cnt);
   printf("\n");
   cnt += 2;
   piramida(n - 1);
}

int main(void) {
   unsigned int n;
   printf("Unesite visinu piramide <= 30: ");
   while (scanf("%u", &n), n > 30) {
      printf("n <= 30");
   }
   piramida(n);
   return 0;
}