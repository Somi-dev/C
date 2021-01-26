#include <stdio.h>
#include <stdlib.h>

int digSum(int num) {
   int absNum = abs(num);
   int sum = 0;
   while (absNum > 0) {
      sum += absNum % 10;
      absNum /= 10;
   }
   return sum;
}
int main(void) {
   int nums[] = {123, 324, 3291, 5};
   int i;
   for (i = 0; i < 4; i++)
      printf("%d\n", digSum(nums[i]));
   return 0;
}