#include <stdio.h>

double average(double *nums, int n);

int main(void) {
   double seq[] = {1.2, 2.3, 3.4, 4.5, 5.6, 6.7, 7.8, 8.9, 9.1};
   double avg;

   avg = average(seq, 9);
   printf("%f\n", avg);
   return 0;
}

double average(double nums[], int n) {  // ili double *nums
   double sum = 0;
   for (int i = 0; i < n; i++) {
      sum += *(nums + i);
   }
   return sum / n;
}
