#include <math.h>
#include <stdio.h>

int main(void) {
    int opcao;
    double a, b, resultado;
    for (;;) {
        puts("\n1 Soma | 2 Subtracao | 3 Multiplicacao | 4 Divisao");
        puts("5 Quadrado | 6 Cubo | 7 Raiz quadrada | 0 Sair");
        printf("Escolha: ");
        if (scanf("%d", &opcao) != 1) break;
        if (opcao == 0) break;
        if (opcao < 1 || opcao > 7) {
            puts("Opcao invalida.");
            continue;
        }
        printf("Primeiro numero: ");
        if (scanf("%lf", &a) != 1 || !isfinite(a)) {
            puts("Numero invalido.");
            break;
        }
        b = 0;
        if (opcao <= 4) {
            printf("Segundo numero: ");
            if (scanf("%lf", &b) != 1 || !isfinite(b)) {
                puts("Numero invalido.");
                break;
            }
        }
        if (opcao == 4 && b == 0) {
            puts("Divisao por zero.");
            continue;
        }
        if (opcao == 7 && a < 0) {
            puts("Nao existe raiz real para numero negativo.");
            continue;
        }
        switch (opcao) {
            case 1: resultado = a + b; break;
            case 2: resultado = a - b; break;
            case 3: resultado = a * b; break;
            case 4: resultado = a / b; break;
            case 5: resultado = a * a; break;
            case 6: resultado = a * a * a; break;
            default: resultado = sqrt(a);
        }
        printf("Resultado: %.2f\n", resultado);
    }
    return 0;
}
