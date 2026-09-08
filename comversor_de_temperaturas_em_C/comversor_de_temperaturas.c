#include <stdio.h>

float celsius_para_fahrenheit(float c);
float celsius_para_kelvin(float c);
float fahrenheit_para_celsius(float f);
float fahrenheit_para_kelvin(float f);
float kelvin_para_celsius(float k);
float kelvin_para_fahrenheit(float k);

int main() {
    int opcao;
    float temp_origem, temp_convertida;
    do {
        printf("\n=== CONVERSOR DE TEMPERATURAS ===\n");
        printf("1. Celsius para Fahrenheit\n");
        printf("2. Celsius para Kelvin\n");
        printf("3. Fahrenheit para Celsius\n");
        printf("4. Fahrenheit para Kelvin\n");
        printf("5. Kelvin para Celsius\n");
        printf("6. Kelvin para Fahrenheit\n");
        printf("0. Sair\n");
        printf("=================================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        if (opcao >= 1 && opcao <= 6) {
            printf("Digite o valor da temperatura: ");
            scanf("%f", &temp_origem);

            switch (opcao) {
                case 1:
                    temp_convertida = celsius_para_fahrenheit(temp_origem);
                    printf("\nResultado: %.2f °C = %.2f °F\n", temp_origem, temp_convertida);
                    break;
                case 2:
                    temp_convertida = celsius_para_kelvin(temp_origem);
                    printf("\nResultado: %.2f °C = %.2f K\n", temp_origem, temp_convertida);
                    break;
                case 3:
                    temp_convertida = fahrenheit_para_celsius(temp_origem);
                    printf("\nResultado: %.2f °F = %.2f °C\n", temp_origem, temp_convertida);
                    break;
                case 4:
                    temp_convertida = fahrenheit_para_kelvin(temp_origem);
                    printf("\nResultado: %.2f °F = %.2f K\n", temp_origem, temp_convertida);
                    break;
                case 5:
                    temp_convertida = kelvin_para_celsius(temp_origem);
                    printf("\nResultado: %.2f K = %.2f °C\n", temp_origem, temp_convertida);
                    break;
                case 6:
                    temp_convertida = kelvin_para_fahrenheit(temp_origem);
                    printf("\nResultado: %.2f K = %.2f °F\n", temp_origem, temp_convertida);
                    break;
            }
        } else if (opcao != 0) {
            printf("\nOpcao invalida! Tente novamente.\n");
        }
    } while (opcao != 0);

    printf("\n--- PROGRAMA ENCERRADO ---\n");
    return 0;
}

float celsius_para_fahrenheit(float c) {
    return (c * 9.0 / 5.0) + 32.0;
}

float celsius_para_kelvin(float c) {
    return c + 273.15;
}

float fahrenheit_para_celsius(float f) {
    return (f - 32.0) * 5.0 / 9.0;
}

float fahrenheit_para_kelvin(float f) {
    return fahrenheit_para_celsius(f) + 273.15;
}

float kelvin_para_celsius(float k) {
    return k - 273.15;
}

float kelvin_para_fahrenheit(float k) {
    return celsius_para_fahrenheit(kelvin_para_celsius(k));
}