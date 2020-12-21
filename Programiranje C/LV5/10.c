#include <stdio.h>

int decbin(int a) {
   int bin = 0;
   int ost, dekjed = 1;
   while (a > 0) {
      ost = a % 2;
      a /= 2;
      bin += ost * dekjed;
      dekjed *= 10;
   }
   return bin;
}

int main(void) {
   int broj;
   while (scanf("%d", &broj), broj < 1 || broj > 128) {
      printf("[1, 128]\n");
   }
   printf("Binarni ekvivalent: %d", decbin(broj));

   return 0;
}