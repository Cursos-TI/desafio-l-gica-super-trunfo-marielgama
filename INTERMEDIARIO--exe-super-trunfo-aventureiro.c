#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(0));

    // Lista de países pra sortear
    char paises[][30] = {
        "Afeganistão", "África do Sul", "Albânia", "Alemanha", "Andorra",
        "Angola", "Antígua e Barbuda", "Arábia Saudita", "Argélia", "Argentina",
        "Armênia", "Austrália", "Áustria", "Azerbaijão", "Bahamas",
        "Bangladesh", "Barbados", "Barein", "Bélgica", "Belize",
        "Benin", "Bielorrússia", "Bolívia", "Bósnia e Herzegovina", "Botsuana",
        "Brasil", "Brunei", "Bulgária", "Burkina Faso", "Butão",
        "Cabo Verde", "Camarões", "Camboja", "Canadá", "Catar",
        "Cazaquistão", "Chade", "Chile", "China", "Chipre",
        "Colômbia", "Comores", "Congo", "Coreia do Norte", "Coreia do Sul",
        "Costa do Marfim", "Costa Rica", "Croácia", "Cuba", "Dinamarca",
        "Djibuti", "Dominica", "Egito", "El Salvador", "Emirados Árabes",
        "Equador", "Eritreia", "Eslováquia", "Eslovênia", "Espanha",
        "Estados Unidos", "Estônia", "Eswatini", "Etiópia", "Fiji",
        "Filipinas", "Finlândia", "França", "Gabão", "Gâmbia",
        "Gana", "Geórgia", "Granada", "Grécia", "Guatemala",
        "Guiana", "Guiné", "Guiné Equatorial", "Haiti", "Holanda"
    };
    int totalPaises = 80;

    // Carta 1 - Usuário 
    char nome1[50];
    long long populacao1;
    double area1;
    double pib1;
    int pontos1;
    double densidade1;

    // Carta 2 - Computador
    char nome2[50];
    long long populacao2;
    double area2;
    double pib2;
    int pontos2;
    double densidade2;

    int opcao;
    double valor1 = 0, valor2 = 0;
    char nomeAtributo[30];

    printf("=== CADASTRO DA SUA CARTA ===\n");
    printf("Nome do país: ");
    scanf(" %49[^\n]", nome1);
    printf("População: ");
    scanf("%lld", &populacao1);
    printf("Área em km²: ");
    scanf("%lf", &area1);
    printf("PIB em bilhões: ");
    scanf("%lf", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);
    densidade1 = (double)populacao1 / area1;

    // Sorteia um país existente
    int indiceSorteado = rand() % totalPaises;
    strcpy(nome2, paises[indiceSorteado]);

    // Gera valores aleatórios pra carta 2
    populacao2 = (long long)(rand() % 7000000000 + 1000000); // 1M a 7B
    area2 = (double)(rand() % 90000000 + 100000); // 100k a 9.1M km²
    pib2 = (double)(rand() % 5000 + 50); // 50 a 5050 bilhões
    pontos2 = rand() % 500 + 1; // 1 a 500 pontos
    densidade2 = (double)populacao2 / area2;

    printf("\n=== CARTA ADVERSÁRIA GERADA ===\n");
    printf("--- %s ---\n", nome2);
    printf("1. População: %lld habitantes\n", populacao2);
    printf("2. Área: %.2lf km²\n", area2);
    printf("3. PIB: %.2lf bilhões\n", pib2);
    printf("4. Pontos turísticos: %d\n", pontos2);
    printf("5. Densidade demográfica: %.2lf hab/km²\n", densidade2);

    printf("\nMenu Principal\n");
    printf("1. Comparar População\n");
    printf("2. Comparar Área\n");
    printf("3. Comparar PIB\n");
    printf("4. Comparar Pontos Turísticos\n");
    printf("5. Comparar Densidade Demográfica\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            strcpy(nomeAtributo, "População");
            valor1 = populacao1;
            valor2 = populacao2;

            printf("\n========================================\n");
            printf(" RESULTADO DA COMPARAÇÃO\n");
            printf("========================================\n");
            printf("País 1: %s\n", nome1);
            printf("País 2: %s\n", nome2);
            printf("Atributo comparado: %s\n", nomeAtributo);
            printf("----------------------------------------\n");
            printf("%s: %.0lf habitantes\n", nome1, valor1);
            printf("%s: %.0lf habitantes\n", nome2, valor2);
            printf("----------------------------------------\n");

            if(valor1 == valor2) {
                printf("Empate!\n");
            } else if(valor1 > valor2) {
                printf("Vencedor: %s\n", nome1);
            } else {
                printf("Vencedor: %s\n", nome2);
            }
            printf("========================================\n");
            break;

        case 2:
            strcpy(nomeAtributo, "Área");
            valor1 = area1;
            valor2 = area2;

            printf("\n========================================\n");
            printf(" RESULTADO DA COMPARAÇÃO\n");
            printf("========================================\n");
            printf("País 1: %s\n", nome1);
            printf("País 2: %s\n", nome2);
            printf("Atributo comparado: %s\n", nomeAtributo);
            printf("----------------------------------------\n");
            printf("%s: %.2lf km²\n", nome1, valor1);
            printf("%s: %.2lf km²\n", nome2, valor2);
            printf("----------------------------------------\n");

            if(valor1 == valor2) {
                printf("Empate!\n");
            } else if(valor1 > valor2) {
                printf("Vencedor: %s\n", nome1);
            } else {
                printf("Vencedor: %s\n", nome2);
            }
            printf("========================================\n");
            break;

        case 3:
            strcpy(nomeAtributo, "PIB");
            valor1 = pib1;
            valor2 = pib2;

            printf("\n========================================\n");
            printf(" RESULTADO DA COMPARAÇÃO\n");
            printf("========================================\n");
            printf("País 1: %s\n", nome1);
            printf("País 2: %s\n", nome2);
            printf("Atributo comparado: %s\n", nomeAtributo);
            printf("----------------------------------------\n");
            printf("%s: %.2lf bilhões USD\n", nome1, valor1);
            printf("%s: %.2lf bilhões USD\n", nome2, valor2);
            printf("----------------------------------------\n");

            if(valor1 == valor2) {
                printf("Empate!\n");
            } else if(valor1 > valor2) {
                printf("Vencedor: %s\n", nome1);
            } else {
                printf("Vencedor: %s\n", nome2);
            }
            printf("========================================\n");
            break;

        case 4:
            strcpy(nomeAtributo, "Pontos Turísticos");
            valor1 = pontos1;
            valor2 = pontos2;

            printf("\n========================================\n");
            printf(" RESULTADO DA COMPARAÇÃO\n");
            printf("========================================\n");
            printf("País 1: %s\n", nome1);
            printf("País 2: %s\n", nome2);
            printf("Atributo comparado: %s\n", nomeAtributo);
            printf("----------------------------------------\n");
            printf("%s: %.0lf\n", nome1, valor1);
            printf("%s: %.0lf\n", nome2, valor2);
            printf("----------------------------------------\n");

            if(valor1 == valor2) {
                printf("Empate!\n");
            } else if(valor1 > valor2) {
                printf("Vencedor: %s\n", nome1);
            } else {
                printf("Vencedor: %s\n", nome2);
            }
            printf("========================================\n");
            break;

        case 5:
            strcpy(nomeAtributo, "Densidade Demográfica");
            valor1 = densidade1;
            valor2 = densidade2;

            printf("\n========================================\n");
            printf(" RESULTADO DA COMPARAÇÃO\n");
            printf("========================================\n");
            printf("País 1: %s\n", nome1);
            printf("País 2: %s\n", nome2);
            printf("Atributo comparado: %s\n", nomeAtributo);
            printf("----------------------------------------\n");
            printf("%s: %.2lf hab/km²\n", nome1, valor1);
            printf("%s: %.2lf hab/km²\n", nome2, valor2);
            printf("----------------------------------------\n");

            if(valor1 == valor2) {
                printf("Empate!\n");
            } else if(valor1 < valor2) {
                printf("Vencedor: %s\n", nome1);
            } else {
                printf("Vencedor: %s\n", nome2);
            }
            printf("========================================\n");
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
    }

    return 0;
}
