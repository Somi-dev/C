#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randfunkc(int GG, int DG) {
   int rez;
   do {
      rez = (rand() % (GG - DG + 1)) + DG;
   } while (rez % 2 == 0);
   return rez;
}

int main(int argc, char *argv[]) {
   srand((unsigned int)time(NULL));
   for (int i = 0; i < 128; i++) {
      printf("%5d\n", randfunkc(2998, -2368));
   }
}