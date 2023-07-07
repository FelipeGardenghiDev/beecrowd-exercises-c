#include <stdio.h>

double calculaMedia(double a, double b) {
    double media;

    a *= 3.5; // nota a com peso 3.5
    b *= 7.5; // nota b com peso 7.5

    media = (a + b) / 11; //o peso das notas somados é 11

    return media;
}

int main() {
    double A, B, MEDIA;

    scanf("%lf", &A);
    scanf("%lf", &B);

    MEDIA = calculaMedia(A, B);

    printf("MEDIA = %.5lf\n", MEDIA);

    return 0;
}
