#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;
    double distance;
    printf("Введіть координати точок вектора (x1,y1;x2,y2;): ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Довжина вектора: %.6f\n", distance);
    return 0;
}