#include <stdio.h>

#include <stdio.h>

int fatorial(int n) {
    if(n == 0) {
        return 1;
    }

    return n * fatorial(n - 1);
}

int main() {
    int n;
    int resultado;

    printf("Digite um numero para calcular o fatorial aqui: : ");
    scanf("%d", &n);

    resultado = fatorial(n);

    printf("Fatorial: %d\n", resultado);

    system("pause");
    return 0;
}
