#include <stdio.h>

int main() {
    float x1, y1;
    float x2, y2;
    float k, b;

    printf("A(x1; y1): ");
    scanf("%f%f", &x1, &y1);
    printf("A(x2; y2): ");
    scanf("%f%f", &x2, &y2);

    k = (y1 - y2) / (x1 - x2);
    b = y2 - k * x2;

    printf("y = %.2fx + %.2f\n", k, b);
}
