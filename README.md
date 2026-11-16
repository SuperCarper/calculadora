#include <stdio.h>

int main() {
    int lista = 0, option;

    while (lista == 0) {
        printf("===============================\nCalculadora Simples\n===============================\nSelecione uma operação:\n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\nOpção:");

        if (scanf("%d", &option) != 1) {
            printf("Entrada inválida. Digite um número.\n");
            while (getchar() != '\n');
            continue;
        }

        if (option == 1) {
            printf("\nDigite o primeiro número:");
            double a, b;

            if (scanf("%lf", &a) != 1) {
                printf("Entrada inválida.\n");
                while (getchar() != '\n');
                continue;
            }

            printf("\nDigite o segundo número:");
            if (scanf("%lf", &b) != 1) {
                printf("Entrada inválida.\n");
                while (getchar() != '\n');
                continue;
            }

            double soma = a + b;
            printf("Resultado: %g + %g = %g\n", a, b, soma);
        }
        else if (option == 2) {
            printf("\nDigite o primeiro número:");
            double a, b;

            if (scanf("%lf", &a) != 1) {
                printf("Entrada inválida.\n");
                while (getchar() != '\n');
                continue;
            }

            printf("\nDigite o segundo número:");
            if (scanf("%lf", &b) != 1) {
                printf("Entrada inválida.\n");
                while (getchar() != '\n');
                continue;
            }

            double sub = a - b;
            printf("Resultado: %g - %g = %g\n", a, b, sub);
        }
        else if (option == 3) {
            printf("\nDigite o primeiro número:");
            double a, b;

            if (scanf("%lf", &a) != 1) {
                printf("Entrada inválida.\n");
                while (getchar() != '\n');
                continue;
            }

            printf("\nDigite o segundo número:");
            if (scanf("%lf", &b) != 1) {
                printf("Entrada inválida.\n");
                while (getchar() != '\n');
                continue;
            }

            double mult = a * b;
            printf("Resultado: %g * %g = %g\n", a, b, mult);
        }
        else if (option == 4) {
            printf("\nDigite o primeiro número:");
            double a, b;

            if (scanf("%lf", &a) != 1) {
                printf("Entrada inválida.\n");
                while (getchar() != '\n');
                continue;
            }

            printf("\nDigite o segundo número:");
            if (scanf("%lf", &b) != 1) {
                printf("Entrada inválida.\n");
                while (getchar() != '\n');
                continue;
            }

            if (b == 0) {
                printf("Erro: Divisão por zero não é permitida.\n");
            }
            else {
                double div = a / b;
                printf("Resultado: %g / %g = %g\n", a, b, div);
            }
        }
        else if (option == 5) {
            lista = 1;
            printf("Obrigado por usar a calculadora! Até a próxima.\n");
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

        if (loop == 's' || loop == 'S') {
            lista = 0;
        }
        else if (loop == 'n' || loop == 'N') {
            lista = 1;
            printf("Obrigado por usar a calculadora! Até a próxima.\n");
        }
    }

    return 0;
}
