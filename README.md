# Calculadora-Basica-em-C

Quatro operações, quadrado, cubo e raiz quadrada; verifica divisão por zero e raiz real negativa.

## Executar

Pré-requisito: C11 e GCC. Execute na pasta do repositório:

```bash
gcc -std=c11 -Wall -Wextra -pedantic calculadora.c -lm -o calculadora
./calculadora
```

No Windows, para C, execute `calculadora.exe` após compilar. Os programas Python usam apenas a biblioteca padrão.

## Escopo

Projeto de estudo de lógica de programação, funções e validação de dados. Os dados são mantidos apenas durante a execução. O código que antes aparecia dentro do README foi transformado em um arquivo de origem executável; versões anteriores continuam no histórico Git.

## Evidência

Um exemplo simples para verificar: tentar dividir por zero e observar a mensagem de validação.
