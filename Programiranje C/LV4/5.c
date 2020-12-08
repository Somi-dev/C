#include <stdio.h>
#include <string.h>
#define MAX 50

int main(void) {
   char prvi[MAX];
   char drugi[MAX];
   fgets(prvi, MAX, stdin);
   fgets(drugi, MAX, stdin);
   int velikap = 0, malap = 0;
   int velikad = 0, malad = 0;

   for (int i = 0; i < strlen(prvi); i++) {
      if (prvi[i] >= 97 && prvi[i] <= 122)
         malap++;
      else if (prvi[i] >= 65 && prvi[i] <= 90)
         velikap++;
   }

   for (int i = 0; i < strlen(drugi); i++) {
      if (drugi[i] >= 97 && drugi[i] <= 122)
         malad++;
      else if (drugi[i] >= 65 && drugi[i] <= 90)
         velikad++;
   }

   if (velikap < velikad && velikap != 0 && velikap != 0) {
      printf("%s", prvi);
   } else if (velikad < velikap) {
      printf("%s", drugi);
   }

   if (velikap == velikad) {
      if (malap < malad) {
         printf("%s", prvi);
      } else if (malap > malad) {
         printf("%s", drugi);
      } else {
         printf("%s", prvi);
         printf("%s", drugi);
      }
   }
   return 0;
}