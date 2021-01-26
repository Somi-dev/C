#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 45
#define DG -100
#define GG 100

void nasumicnaZamjena(short int *p) {
   short int temp;
   int random;
   printf("\nIZMJENA\n");
   for (int i = 0; i < MAX; i++) {
      random = rand() % (44 + 1) + 0;
      temp = *(p + i);
      *(p + i) = *(p + random);
      *(p + random) = temp;
      printf("%hd ", *(p + i));
   }
}

int main(void) {
   short int *p = NULL;
   p = (short int *)malloc(MAX * sizeof(short int));

   if (p == NULL) {
      return EXIT_FAILURE;
   }
   srand((unsigned int)time(NULL));
   for (int i = 0; i < MAX; i++) {
      *(p + i) = rand() % (GG - DG + 1) + DG;
      printf("%hd ", *(p + i));
   }
   nasumicnaZamjena(p);

   free(p);

   return 0;
}
