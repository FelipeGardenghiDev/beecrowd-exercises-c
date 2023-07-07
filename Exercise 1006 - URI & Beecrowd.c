#include <stdio.h>

double A, B, C;

void coletaValores() {
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
}

double calculaMedia(double a, double b, double c) {
    double MEDIA;

    MEDIA = ((a * 2) + (b * 3) + (c * 5)) / 10;

    return MEDIA;
}

void imprimeMedia(double media) {
    printf("MEDIA = %.1lf\n", media);
}

int main() {
    double MEDIA;

    coletaValores();

    MEDIA = calculaMedia(A, B, C);

    imprimeMedia(MEDIA);

    return 0;
}
