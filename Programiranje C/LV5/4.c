#include <stdio.h>

int razlika(int a) {
   int prvi = a;
   while (prvi >= 10) {
      prvi /= 10;
   }
   return prvi - (a % 10);
}

int main(void) {
   printf("Razlika najvece i najmanje znamenke je: %d", razlika(26931));
   return 0;
}