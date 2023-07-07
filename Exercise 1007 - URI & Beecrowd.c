#include <stdio.h>

int A, B, C, D;

void recebeValores() {
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
}

int calculaProduto(int a, int b) {
    int resultado;

    resultado = a * b;

    return resultado;
}

void imprimeResultado(int resultado) {
    printf("DIFERENCA = %d\n", resultado);
}

int main() {
    int PROD1, PROD2, DIFERENCAFINAL;

    recebeValores();

    PROD1 = calculaProduto(A, B);
    PROD2 = calculaProduto(C, D);

    DIFERENCAFINAL = PROD1 - PROD2;

    imprimeResultado(DIFERENCAFINAL);

    return 0;
}
