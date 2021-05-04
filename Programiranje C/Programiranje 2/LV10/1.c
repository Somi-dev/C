#include <math.h>
#include <stdio.h>
#include <stdlib.h>

FILE *ulaz = NULL;

typedef struct tocka {
   float x;
   float y;
   float z;
} tocka_t;

typedef struct trokut {
   tocka_t *t1;
   tocka_t *t2;
   tocka_t *t3;
} trokut_t;

void input(tocka_t *p, trokut_t *q, int n, int m) {
   int ind1, ind2, ind3;
   ulaz = fopen("model.txt", "r");
   fscanf(ulaz, "%f\n");
   fscanf(ulaz, "%f\n");

   for (int i = 0; i < n; i++) {
      fscanf(ulaz, "%f %f %f\n", &p[i].x, &p[i].y, &p[i].z);
   }

   for (int i = 0; i < m; i++) {
      fscanf(ulaz, "%d %d %d\n", &ind1, &ind2, &ind3);
      q[i].t1 = &p[ind1];
      q[i].t2 = &p[ind2];
      q[i].t3 = &p[ind3];
   }
   fclose(ulaz);
}

float opseg(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3) {
   float prva, druga, treca, opseg;
   prva = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2) + pow(z3 - z1, 2));
   druga = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
   treca = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2) + pow(z3 - z2, 2));
   opseg = prva + druga + treca;
   return opseg;
}

int main(void) {
   tocka_t *tocke;
   trokut_t *trokuti;
   int n, m;
   float o, oMax = 0;

   ulaz = fopen("model.txt", "r");
   fscanf(ulaz, "%d\n", &n);
   fscanf(ulaz, "%d\n", &m);
   fclose(ulaz);

   tocke = (tocka_t *)malloc(n * sizeof(tocka_t));
   trokuti = (trokut_t *)malloc(m * sizeof(trokut_t));

   input(tocke, trokuti, n, m);

   for (int i = 0; i < m; i++) {
      o = opseg(trokuti[i].t1->x, trokuti[i].t1->y, trokuti[i].t1->z, trokuti[i].t2->x, trokuti[i].t2->y, trokuti[i].t2->z, trokuti[i].t3->x, trokuti[i].t3->y, trokuti[i].t3->z);
      if (o > oMax) oMax = o;
   }

   printf("%.2f", oMax);

   return 0;
}