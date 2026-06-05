#include <stdio.h>
#include <string.h>

int main() {
    char estado1[50], estado2[50];
    char codigo1[10], codigo2[10];
    char nomecidade1[50], nomecidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;
    int opcao;

    // --- cadastro da carta 1 ---
    printf("--- cadastro da carta 1 ---\n");
    printf("estado (ex: sao paulo): ");
    scanf(" %[^\n]s", estado1); // Aceita espacos e limpa o buffer
    printf("codigo da carta (ex: a01): ");
    scanf(" %[^\n]s", codigo1);
    printf("nome da cidade: ");
    scanf(" %[^\n]s", nomecidade1);
    printf("populaçao: ");
    scanf("%lu", &populacao1);
    printf("area (em km²): ");
    scanf("%f", &area1);
    printf("pib (em bilhãµes): ");
    scanf("%f", &pib1);
    printf("numero de pontos turã­sticos: ");
    scanf("%d", &pontosturisticos1);

    // calculos da carta 1
    densidadepopulacional1 = (float) populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000.0) / (float)populacao1; 
    printf("\n");

    // --- cadastro da carta 2 ---
    printf("--- cadastro da carta 2 ---\n");
    printf("estado (ex: rio de janeiro): ");
    scanf(" %[^\n]s", estado2); // O espaço antes do % remove quebras de linha anteriores
    printf("codigo da carta (ex: b02): ");
    scanf(" %[^\n]s", codigo2);
    printf("nome da cidade: ");
    scanf(" %[^\n]s", nomecidade2);
    printf("populaçao: ");
    scanf("%lu", &populacao2);
    printf("area (em km²): ");
    scanf("%f", &area2);
    printf("pib (em bilhoes): ");
    scanf("%f", &pib2);
    printf("numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    // calculos da carta 2
    densidadepopulacional2 = (float) populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000.0) / (float)populacao2;
    printf("\n");

    // --- menu de escolha do atributo ---
    printf("Escolha o atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional (Menor vence!)\n");
    printf("6 - PIB per Capita\n");
    printf("Opcao: ");
    scanf("%d", &opcao);
    printf("\n");

    // --- switch para definicao do vencedor ---
    switch(opcao) {
        case 1:
            printf("Atributo: Populacao\n");
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Area\n");
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turisticos\n");
            if (pontosturisticos1 > pontosturisticos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
            } else if (pontosturisticos2 > pontosturisticos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Populacional\n");
            if (densidadepopulacional1 < densidadepopulacional2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
            } else if (densidadepopulacional2 < densidadepopulacional1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 6:
            printf("Atributo: PIB per Capita\n");
            if (pibpercapita1 > pibpercapita2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
            } else if (pibpercapita2 > pibpercapita1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
