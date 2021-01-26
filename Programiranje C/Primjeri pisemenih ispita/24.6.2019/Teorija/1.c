#include <stdio.h>
#include <stdlib.h>

int seekWithinError(double sequence[], int n, double num) {
   int i;
   const double err = 0.1;
   for (i = 0; i < n; i++)
      if (num >= sequence[i] - err && num <= sequence[i] + err) return 1;
   return 0;
}

int main(void) {
   double a[] = {1.1, 2.34, 9.1, 1.23, 3.01, 7.1};
   int f = seekWithinError(a, 7, 3);
   if (f)
      printf("Found!");
   else
      printf("Not found!");

   return 0;
}