#include <stdio.h>

struct tocka {
   float x;
   float y;
   float z;
};

struct trokut {
   struct tocka *t1;
   struct tocka *t2;
   struct tocka *t3;
};

int main(void) {
   struct trokut t[10];
   struct tocka tocke[10];
   float opseg, maxOpseg = 0;
   int n, m;
   int x, y, z;

   printf("Unesite n i m: ");
   scanf("%d %d", &n, &m);

   for (int i = 0; i < n; i++) {
      scanf("%f %f %f", &tocke[i].x, &tocke[i].y, &tocke[i].z);
   }

   for (int i = 0; i < m; i++) {
      printf("Upisi indexe tocaka za %d trokut: ", i + 1);
      scanf("%d%d%d", &x, &y, &z);
      t[i].t1 = &tocke[x];
      t[i].t2 = &tocke[y];
      t[i].t3 = &tocke[z];
   }

   for (int i = 0; i < m; i++) {
      opseg = 0;
      opseg += sqrt(pow(t[i].t2->x - t[i].t1->x, 2) + pow(t[i].t2->y - t[i].t1->y, 2) + pow(t[i].t2->z - t[i].t1->z, 2));
      opseg += sqrt(pow(t[i].t3->x - t[i].t2->x, 2) + pow(t[i].t3->y - t[i].t2->y, 2) + pow(t[i].t3->z - t[i].t2->z, 2));
      opseg += sqrt(pow(t[i].t1->x - t[i].t3->x, 2) + pow(t[i].t1->y - t[i].t3->y, 2) + pow(t[i].t1->z - t[i].t3->z, 2));
      if (opseg > maxOpseg) {
         maxOpseg = opseg;
      }
   }

   printf("%.2f\n", maxOpseg);

   return 0;
}