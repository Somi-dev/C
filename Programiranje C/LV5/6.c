#include <math.h>
#include <stdio.h>

float y(float x1, float x2, float x3) {
   return pow(x1, 3) - (x1 * x3) / (fabs(x2) + pow(10, -3)) + 5 * pow(x3, 2);
}

int main(void) {
   printf("Vrijednost funkcije y je = %.2f", y(1.2, -4.1, 2.825));
   return 0;
}