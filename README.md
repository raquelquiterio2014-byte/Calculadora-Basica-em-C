# Calculadora-Basica-em-C
Calculadora em linguagem C com menu interativo e múltiplas operações matemáticas

# 🔢 Calculadora Completa em C

Projeto desenvolvido em linguagem C com múltiplas operações matemáticas.

## 🚀 Funcionalidades
- Soma
- Subtração
- Multiplicação
- Divisão (com validação)
- Quadrado
- Cubo
- Raiz quadrada
- Menu interativo

## 🛠 Tecnologias
- Linguagem C
- Biblioteca math.h

## ▶️ Como compilar

gcc calculadora.c -o calculadora -lm

## ▶️ Como executar

./calculadora

#include <stdio.h>
#include <math.h>

// Operações básicas
double soma(double a, double b) {
    return a + b;
}

double subtracao(double a, double b) {
    return a - b;
}

double multiplicacao(double a, double b) {
    return a * b;
}

double divisao(double a, double b) {
    if (b == 0) {
        printf("Erro: divisao por zero!\n");
        return 0;
    }
    return a / b;
}

// Operações matemáticas
double quadrado(double n) {
    return n * n;
}

double cubo(double n) {
    return n * n * n;
}

double raiz(double n) {
    if (n < 0) {
        printf("Nao existe raiz real para numero negativo.\n");
        return -1;
    }
    return sqrt(n);
}

int main() {
    double num1, num2;
    int opcao;

    while (1) {
        printf("\n=== CALCULADORA ===\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Quadrado\n");
        printf("6 - Cubo\n");
        printf("7 - Raiz quadrada\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Encerrando programa...\n");
            break;
        }

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite dois numeros: ");
            scanf("%lf %lf", &num1, &num2);
        } else if (opcao >= 5 && opcao <= 7) {
            printf("Digite um numero: ");
            scanf("%lf", &num1);
        }

        switch (opcao) {
            case 1:
                printf("Resultado: %.2lf\n", soma(num1, num2));
                break;
            case 2:
                printf("Resultado: %.2lf\n", subtracao(num1, num2));
                break;
            case 3:
                printf("Resultado: %.2lf\n", multiplicacao(num1, num2));
                break;
            case 4:
                printf("Resultado: %.2lf\n", divisao(num1, num2));
                break;
            case 5:
                printf("Resultado: %.2lf\n", quadrado(num1));
                break;
            case 6:
                printf("Resultado: %.2lf\n", cubo(num1));
                break;
            case 7:
                printf("Resultado: %.2lf\n", raiz(num1));
                break;
            default:
                printf("Opcao invalida.\n");
        }
    }

    return 0;
}
