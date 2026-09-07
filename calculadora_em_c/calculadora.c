#include <stdio.h>
#include <math.h>

int main() {
    int opcao = -1;
    double a, b, resultado;

    while (opcao != 0) {
        // Exibição do Menu
        printf("\n================ CALCULADORA DE 20 OPERACOES ================\n");
        printf(" 1. Soma (a + b)            11. Tangente (tan(a))\n");
        printf(" 2. Subtracao (a - b)       12. Arccosseno (acos(a))\n");
        printf(" 3. Multiplicacao (a * b)   13. Arcseno (asin(a))\n");
        printf(" 4. Divisao (a / b)         14. Arctangente (atan(a))\n");
        printf(" 5. Potencia (a^b)          15. Logaritmo Natural (ln(a))\n");
        printf(" 6. Raiz Quadrada (sqrt(a)) 16. Logaritmo Base 10 (log10(a))\n");
        printf(" 7. Raiz Cubica (cbrt(a))   17. Exponencial (e^a)\n");
        printf(" 8. Resto Div. Int (a %% b)  18. Valor Absoluto (|a|)\n");
        printf(" 9. Cosseno (cos(a))        19. Arredondar P/ Cima (ceil(a))\n");
        printf("10. Seno (sin(a))           20. Arredondar P/ Baixo (floor(a))\n");
        printf(" 0. Sair\n");
        printf("=============================================================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Encerrando a calculadora... Ate logo!\n");
        }
        // Operações que requerem 2 operandos
        else if (opcao == 1) {
            printf("Digite o primeiro numero: ");
            scanf("%lf", &a);
            printf("Digite o segundo numero: ");
            scanf("%lf", &b);
            printf("Resultado: %.2lf\n", a + b);
        } else if (opcao == 2) {
            printf("Digite o primeiro numero: ");
            scanf("%lf", &a);
            printf("Digite o segundo numero: ");
            scanf("%lf", &b);
            printf("Resultado: %.2lf\n", a - b);
        } else if (opcao == 3) {
            printf("Digite o primeiro numero: ");
            scanf("%lf", &a);
            printf("Digite o segundo numero: ");
            scanf("%lf", &b);
            printf("Resultado: %.2lf\n", a * b);
        } else if (opcao == 4) {
            printf("Digite o dividendo: ");
            scanf("%lf", &a);
            printf("Digite o divisor: ");
            scanf("%lf", &b);
            if (b != 0) {
                printf("Resultado: %.2lf\n", a / b);
            } else {
                printf("Erro: Divisao por zero nao e permitida.\n");
            }
        } else if (opcao == 5) {
            printf("Digite a base (a): ");
            scanf("%lf", &a);
            printf("Digite o expoente (b): ");
            scanf("%lf", &b);
            printf("Resultado: %.2lf\n", pow(a, b));
        } else if (opcao == 8) {
            long int ia, ib;
            printf("Digite o primeiro número inteiro: ");
            scanf("%ld", &ia);
            printf("Digite o segundo número inteiro: ");
            scanf("%ld", &ib);
            if (ib != 0) {
                printf("Resultado (Resto): %ld\n", ia % ib);
            } else {
                printf("Erro: Divisao por zero nao e permitida.\n");
            }
        }
        // Operações de 1 operando que requerem validação (a > 0 ou -1 <= a <= 1)
        else if (opcao == 6) {
            printf("Digite o numero: ");
            scanf("%lf", &a);
            if (a >= 0) {
                printf("Resultado: %.2lf\n", sqrt(a));
            } else {
                printf("Erro: Nao e possivel calcular raiz quadrada de numero negativo.\n");
            }
        } else if (opcao == 12) {
            printf("Digite o valor (entre -1 e 1): ");
            scanf("%lf", &a);
            if (a >= -1 && a <= 1) {
                printf("Resultado: %.2lf rad\n", acos(a));
            } else {
                printf("Erro: O valor para arccosseno deve estar entre -1 e 1.\n");
            }
        } else if (opcao == 13) {
            printf("Digite o valor (entre -1 e 1): ");
            scanf("%lf", &a);
            if (a >= -1 && a <= 1) {
                printf("Resultado: %.2lf rad\n", asin(a));
            } else {
                printf("Erro: O valor para arcseno deve estar entre -1 e 1.\n");
            }
        } else if (opcao == 15) {
            printf("Digite o numero (maior que 0): ");
            scanf("%lf", &a);
            if (a > 0) {
                printf("Resultado: %.2lf\n", log(a));
            } else {
                printf("Erro: O logaritmo exige um valor estritamente maior que zero.\n");
            }
        } else if (opcao == 16) {
            printf("Digite o numero (maior que 0): ");
            scanf("%lf", &a);
            if (a > 0) {
                printf("Resultado: %.2lf\n", log10(a));
            } else {
                printf("Erro: O logaritmo exige um valor estritamente maior que zero.\n");
            }
        }
        // Operações de 1 operando genéricas
        else if (opcao == 7) {
            printf("Digite o numero: ");
            scanf("%lf", &a);
            printf("Resultado: %.2lf\n", cbrt(a));
        } else if (opcao == 9) {
            printf("Digite o angulo em radianos: ");
            scanf("%lf", &a);
            printf("Resultado: %.2lf\n", cos(a));
        } else if (opcao == 10) {
            printf("Digite o angulo em radianos: ");
            scanf("%lf", &a);
            printf("Resultado: %.2lf\n", sin(a));
        } else if (opcao == 11) {
            printf("Digite o angulo em radianos: ");
            scanf("%lf", &a);
            printf("Resultado: %.2lf\n", tan(a));
        } else if (opcao == 14) {
            printf("Digite o valor: ");
            scanf("%lf", &a);
            printf("Resultado: %.2lf rad\n", atan(a));
        } else if (opcao == 17) {
            printf("Digite o expoente de e: ");
            scanf("%lf", &a);
            printf("Resultado: %.2lf\n", exp(a));
        } else if (opcao == 18) {
            printf("Digite o numero: ");
            scanf("%lf", &a);
            printf("Resultado: %.2lf\n", fabs(a));
        } else if (opcao == 19) {
            printf("Digite o numero: ");
            scanf("%lf", &a);
            printf("Resultado: %.2lf\n", ceil(a));
        } else if (opcao == 20) {
            printf("Digite o numero: ");
            scanf("%lf", &a);
            printf("Resultado: %.2lf\n", floor(a));
        } 
        // Tratamento de opção inválida
        else {
            printf("Opcao invalida! Digite um numero de 0 a 20.\n");
        }
    }

    return 0;
}