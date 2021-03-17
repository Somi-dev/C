#include <stdio.h>

typedef struct {
   float x;
   float y;
} IMAGINARNI;

int main(void) {
   IMAGINARNI t1;
   IMAGINARNI t2;

   printf("Upisite 1. kompleksni broj: x + yi\n");
   scanf("%f %f", &t1.x, &t1.y);

   printf("Upisite 2. kompleksni broj: x + yi\n");
   scanf("%f %f", &t2.x, &t2.y);

   printf("REZULTAT:\n%.3f %.3f*i\n", t1.x + t2.x, t1.y + t2.y);

   return 0;
}