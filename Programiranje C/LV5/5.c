#include <stdio.h>

char velikoUMalo(char a) {
   return a >= 'A' && a <= 'Z' ? a : a - 32;
}

int main(void) {
   char znak;
   printf("Upisite znak: ");
   scanf("%c", &znak);
   printf("%c", velikoUMalo(znak));

   return 0;
}