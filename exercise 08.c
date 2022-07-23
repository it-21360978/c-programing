#include<stdio.h>



int main() {
int myArr1D[12];
int myArr2D[4][3];
int i, j, a = 0;

for(i = 0; i < 12; ++i) {
scanf("%d", &myArr1D[i]);
}

for(j = 0; j < 3; ++j) {
for(i = 0; i < 4; ++i) {
myArr2D[i][j] = myArr1D[a];
++a;
}
}

printf("\n1D Arr: \n");
for(i = 0; i < 12; ++i) {
printf("%d ", myArr1D[i]);
}

printf("\n\n2D Arr: \n");
for(i = 0; i < 4; ++i) {
for(j = 0; j < 3; ++j) {
printf("%d ", myArr2D[i][j]);
}
printf("\n");
}
return 0;
}