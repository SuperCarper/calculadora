#include <stdio.h>

int main() {
    int lista = 0, option;

    while (lista == 0) {
        printf("===============================\nCalculadora Simples\n===============================\nSelecione uma operação:\n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\nOpção:");
        scanf("%d", &option);

        if (option == 1) {
            printf("\nDigite o primeiro número:");
            int a, b;
            scanf("%d", &a);
            printf("\nDigite o segundo número:");
            scanf("%d", &b);
            int soma = a + b;
            printf("Resultado: %d + %d = %d\n", a, b, soma);
        }
        else if (option == 2) {
            printf("\nDigite o primeiro número:");
            int a, b;
            scanf("%d", &a);
            printf("\nDigite o segundo número:");
            scanf("%d", &b);
            int sub = a - b;
            printf("Resultado: %d - %d = %d\n", a, b, sub);
        }
        else if (option == 3) {
            printf("\nDigite o primeiro número:");
            int a, b;
            scanf("%d", &a);
            printf("\nDigite o segundo número:");
            scanf("%d", &b);
            int mult = a * b;
            printf("Resultado: %d * %d = %d\n", a, b, mult);
        }
        else if (option == 4) {
            printf("\nDigite o primeiro número:");
            int a, b;
            scanf("%d", &a);
            printf("\nDigite o segundo número:");
            scanf("%d", &b);

            if (b == 0) {
                printf("Erro: Divisão por zero não é permitida.\n");
                continue;
            }
            else {
                int div = a / b;
                printf("Resultado: %d / %d = %d\n", a, b, div);
            }
        }
        else if (option == 5) {
            lista = 1;
            printf("Obrigado por usar a calculadora! Até a próxima.");
            continue;
        }
        else {
            printf("Opção inválida.\n");
            continue;
        }

        printf("Deseja realizar outra operação? (s/n): ");
        char loop;
        scanf(" %c", &loop);

        while (loop != 's' && loop != 'S' && loop != 'n' && loop != 'N') {
            printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não: ");
            scanf(" %c", &loop);
        }

        if (loop == 'n' || loop == 'N') {
            lista = 1;
            printf("Obrigado por usar a calculadora! Até a próxima.");
        }
    }

    return 0;
}