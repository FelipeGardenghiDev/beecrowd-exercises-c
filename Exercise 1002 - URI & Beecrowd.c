#include <stdio.h>

double calculaArea (double raio) {
    double area;
    double n = 3.14159;

    area = n * (raio * raio);

    return area;
}

int main() {
    double area, raio;

    scanf("%lf", &raio);

    area = calculaArea(raio);

    printf("A=%.4lf\n", area);

    return 0;
}
