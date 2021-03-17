#include <stdio.h>

int main(void) {
   char *mjeseci[] = {"sijecanj", "veljaca", "ozujak", "travanj", "svibanj",
                      "lipanj", "srpanj", "kolovoz", "rujan", "listopad",
                      "studeni", "prosinac"};

   int n;
   while (scanf("%d", &n), n < 1 || n > 12) {
      printf("Nekorektan broj mjeseca");
   }

   printf("%s", *(mjeseci + n - 1));

   return 0;
}