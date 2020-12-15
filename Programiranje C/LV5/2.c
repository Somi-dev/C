#include <math.h>
#include <stdio.h>

float povrsina(float a, float b, float c) {
   float p, s;
   if (a + b > c && a + c > b && b + c > a) {
      s = (a + b + c) / 2;
      p = sqrt(s * (s - a) * (s - b) * (s - c));
      return p;
   } else {
      return 0;
   }
}

int main(void) {
   float a, b, c;
   printf("Upisite stranice trokuta: ");
   scanf("%f %f %f", &a, &b, &c);
   printf("Povrsina je: %.2f", povrsina(a, b, c));
   return 0;
}