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

    // Variáveis de controle do jogo
    int opcao1, opcao2Dinamica, opcao2Real;
    double v1_attr1 = 0, v2_attr1 = 0;
    double v1_attr2 = 0, v2_attr2 = 0;
    char nomeAtributo1[30], nomeAtributo2[30];
    double somaCarta1 = 0, somaCarta2 = 0;

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
    populacao2 = (long long)(rand() % 7000000000 + 1000000); 
    area2 = (double)(rand() % 90000000 + 100000); 
    pib2 = (double)(rand() % 5000 + 50); 
    pontos2 = rand() % 500 + 1; 
    densidade2 = (double)populacao2 / area2;

    printf("\n=== CARTA ADVERSÁRIA GERADA ===\n");
    printf("--- %s ---\n", nome2);
    printf("População: %lld habitantes\n", populacao2);
    printf("Área: %.2lf km²\n", area2);
    printf("PIB: %.2lf bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade demográfica: %.2lf hab/km²\n", densidade2);

    // MENU 1: Escolha com validação por IF-ELSE
    printf("\n=== MENU: ESCOLHA O PRIMEIRO ATRIBUTO ===\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n");
    printf("Escolha uma opção (1-5): ");
    scanf("%d", &opcao1);

    if (opcao1 >= 1 && opcao1 <= 5) {
        switch (opcao1) {
            case 1: strcpy(nomeAtributo1, "População"); v1_attr1 = populacao1; v2_attr1 = populacao2; break;
            case 2: strcpy(nomeAtributo1, "Área"); v1_attr1 = area1; v2_attr1 = area2; break;
            case 3: strcpy(nomeAtributo1, "PIB"); v1_attr1 = pib1; v2_attr1 = pib2; break;
            case 4: strcpy(nomeAtributo1, "Pontos Turísticos"); v1_attr1 = pontos1; v2_attr1 = pontos2; break;
            case 5: strcpy(nomeAtributo1, "Densidade Demográfica"); v1_attr1 = densidade1; v2_attr1 = densidade2; break;
        }
    } else {
        printf("Opção inválida! O jogo foi encerrado.\n");
        return 1;
    }

    // MENU 2: Exibição Fixa via IF-ELSE baseada na Opção 1
    printf("\n=== MENU: ESCOLHA O SEGUNDO ATRIBUTO ===\n");
    if (opcao1 == 1) {
        printf("1. Área\n2. PIB\n3. Pontos Turísticos\n4. Densidade Demográfica\n");
    } else if (opcao1 == 2) {
        printf("1. População\n2. PIB\n3. Pontos Turísticos\n4. Densidade Demográfica\n");
    } else if (opcao1 == 3) {
        printf("1. População\n2. Área\n3. Pontos Turísticos\n4. Densidade Demográfica\n");
    } else if (opcao1 == 4) {
        printf("1. População\n2. Área\n3. PIB\n4. Densidade Demográfica\n");
    } else {
        printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n");
    }
    
    printf("Escolha uma opção (1-4): ");
    scanf("%d", &opcao2Dinamica);

    // Validação da segunda opção com IF-ELSE e mapeador com operador ternário
    if (opcao2Dinamica >= 1 && opcao2Dinamica <= 4) {
        opcao2Real = (opcao2Dinamica < opcao1) ? opcao2Dinamica : opcao2Dinamica + 1;

        switch (opcao2Real) {
            case 1: strcpy(nomeAtributo2, "População"); v1_attr2 = populacao1; v2_attr2 = populacao2; break;
            case 2: strcpy(nomeAtributo2, "Área"); v1_attr2 = area1; v2_attr2 = area2; break;
            case 3: strcpy(nomeAtributo2, "PIB"); v1_attr2 = pib1; v2_attr2 = pib2; break;
            case 4: strcpy(nomeAtributo2, "Pontos Turísticos"); v1_attr2 = pontos1; v2_attr2 = pontos2; break;
            case 5: strcpy(nomeAtributo2, "Densidade Demográfica"); v1_attr2 = densidade1; v2_attr2 = densidade2; break;
        }
    } else {
        printf("Opção inválida! O jogo foi encerrado.\n");
        return 1;
    }

    // Cálculo das Somas
    somaCarta1 = v1_attr1 + v1_attr2;
    somaCarta2 = v2_attr1 + v2_attr2;

    // EXIBIÇÃO CLARA DOS RESULTADOS
    printf("\n==================================================\n");
    printf("             RESULTADO DA COMPARAÇÃO\n");
    printf("==================================================\n");
    printf("Países na disputa: %s vs %s\n", nome1, nome2);
    printf("--------------------------------------------------\n");
    
    // Comparação do Atributo 1
    printf("Atributo 1: %s\n", nomeAtributo1);
    printf(" - %s: %.2lf\n", nome1, v1_attr1);
    printf(" - %s: %.2lf\n", nome2, v2_attr1);
    
    if (v1_attr1 == v2_attr1) {
        printf(" > Rodada 1: Empate no atributo\n");
    } else {
        char* vencedorAttr1 = (opcao1 == 5) ? (v1_attr1 < v2_attr1 ? nome1 : nome2) : (v1_attr1 > v2_attr1 ? nome1 : nome2);
        printf(" > Rodada 1 vencida por: %s %s\n", vencedorAttr1, (opcao1 == 5 ? "(Menor densidade)" : ""));
    }
    printf("--------------------------------------------------\n");

    // Comparação do Atributo 2
    printf("Atributo 2: %s\n", nomeAtributo2);
    printf(" - %s: %.2lf\n", nome1, v1_attr2);
    printf(" - %s: %.2lf\n", nome2, v2_attr2);
    
    if (v1_attr2 == v2_attr2) {
        printf(" > Rodada 2: Empate no atributo\n");
    } else {
        char* vencedorAttr2 = (opcao2Real == 5) ? (v1_attr2 < v2_attr2 ? nome1 : nome2) : (v1_attr2 > v2_attr2 ? nome1 : nome2);
        printf(" > Rodada 2 vencida por: %s %s\n", vencedorAttr2, (opcao2Real == 5 ? "(Menor densidade)" : ""));
    }
    printf("--------------------------------------------------\n");

    // Resultado pela Soma das Cartas
    printf("SOMA TOTAL DOS ATRIBUTOS:\n");
    printf(" - Soma %s: %.2lf\n", nome1, somaCarta1);
    printf(" - Soma %s: %.2lf\n", nome2, somaCarta2);
    printf("--------------------------------------------------\n");

    if (somaCarta1 == somaCarta2) {
        printf("Resultado Final: Empate!\n");
    } else {
        printf("Resultado Final: VENCEDOR É %s!\n", (somaCarta1 > somaCarta2) ? nome1 : nome2);
    }
    printf("==================================================\n");

    return 0;
}
