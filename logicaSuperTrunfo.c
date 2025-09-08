#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas


int main() {
    
    char pais[50], pais2[50];
    int populacao, populacao2, pontosturisticos, pontosturisticos2;
    int opcao;
    float area, area2, pib, pib2;
   
    printf("\n\n");
    printf("\n*** SUPER TRUNFO ***\n ");
    printf("\nCARTA 1:\n");
    printf("1. Digite o nome do pais: \n ");
    scanf("%s", &pais);
    printf("2. Digite o numero da populaçao: \n ");
    scanf("%d", &populacao);
    printf("3. Digite qual a area(km2) do pais: \n ");
    scanf("%f", &area);
    printf("4. Digite o produto interno bruto(PIB): \n");
    scanf("%f", &pib); 
    printf("5. Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosturisticos); 

    printf("\nCARTA 2:\n");
    printf("1. Digite o nome do pais: \n ");
    scanf("%s", &pais2);
    printf("2. Digite o numero da populaçao: \n ");
    scanf("%d", &populacao2);
    printf("3. Digite qual a area(km2) do pais: \n ");
    scanf("%f", &area2);
    printf("4. Digite o produto interno bruto(PIB): \n");
    scanf("%f", &pib2); 
    printf("5. Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosturisticos2); 

    // DENSIDADE DEMOGRAFICA
    float densidadedemo = (float) populacao / area;
    float densidadedemo2 = (float) populacao2 / area2;

    printf("\n ");
    printf("\nESCOLHA O ATRIBUTO QUE DESEJA COMPARAR: \n ");
    printf("1. Populaçao\n ");
    printf("2. Area\n ");
    printf("3. PIB\n ");
    printf("4. Pontos Turisticos\n ");
    printf("5. Densidade Demografica\n ");
    scanf("%d", &opcao);

    printf("Pais da Carta 1: %s // Pais da Carta 2: %s\n", pais, pais2);

    // SWITCH 
    switch (opcao) {
    case 1:
        if(populacao > populacao2){
            printf("A Carta 1 Venceu!\n");
            printf("O atributo escolhido foi Populaçao!\n");
            printf("Populaçao da Carta 1: %d!\n", populacao);
            printf("Populaçao da Carta 2: %d!\n", populacao2);
        } else if (populacao < populacao2) {
            printf("A Carta 2 Venceu!\n");
            printf("O atributo escolhido foi Populaçao!\n");
            printf("Populaçao da Carta 1: %d!\n", populacao);
            printf("Populaçao da Carta 2: %d!\n", populacao2);
        } else {
            printf("Empatou!\n");
            printf("O atributo escolhido foi Populaçao!\n");
            printf("Populaçao da Carta 1: %d!\n", populacao);
            printf("Populaçao da Carta 2: %d!\n", populacao2);
        }
        break;
    case 2:
        if(area > area2){
            printf("A Carta 1 Venceu!\n");
            printf("O atributo escolhido foi Area!\n");
            printf("O valor da Area da Carta 1 eh: %f!\n", area);
            printf("O valor da Area da Carta 2 eh: %f!\n", area2);
        } else if (area < area2) {
            printf("A Carta 2 Venceu!");
            printf("O atributo escolhido foi Area!\n");
            printf("O valor da Area da Carta 1 eh: %f!\n", area);
            printf("O valor da Area da Carta 2 eh: %f!\n", area2);
        } else {
            printf("Empatou!\n");
            printf("O atributo escolhido foi Area!\n");
            printf("O valor da Area da Carta 1 eh: %f!\n", area);
            printf("O valor da Area da Carta 2 eh: %f!\n", area2);
        }
        break;
    case 3:
        if(pib > pib2){
            printf("A Carta 1 Venceu!\n");
            printf("O atributo escolhido foi PIB!\n");
            printf("O valor do PIB da Carta 1 eh: %f!\n", pib);
            printf("O valor do PIB da Carta 2 eh: %f!\n", pib2);
        } else if (pib < pib2){
            printf("A Carta 2 Venceu!\n");
            printf("O atributo escolhido foi PIB!\n");
            printf("O valor do PIB da Carta 1 eh: %f!\n", pib);
            printf("O valor do PIB da Carta 2 eh: %f!\n", pib2);

        } else {
            printf("Empatou!\n");
            printf("O atributo escolhido foi PIB!\n");
            printf("O valor do PIB da Carta 1 eh: %f!\n", pib);
            printf("O valor do PIB da Carta 2 eh: %f!\n", pib2);
        }
        break;
    case 4:
        if(pontosturisticos > pontosturisticos2){
            printf("A Carta 1 Venceu!\n");
            printf("O atributo escolhido foi Pontos Turisticos!\n");
            printf("O valor dos Pontos Turisticos da Carta 1 eh: %d!\n", pontosturisticos);
            printf("O valor dos Pontos Turisticos da Carta 2 eh: %d!\n", pontosturisticos2);
        } else if (pontosturisticos < pontosturisticos2){
            printf("A Carta 2 Venceu!\n");
            printf("O atributo escolhido foi Pontos Turisticos!\n");
            printf("O valor dos Pontos Turisticos da Carta 1 eh: %d!\n", pontosturisticos);
            printf("O valor dos Pontos Turisticos da Carta 2 eh: %d!\n", pontosturisticos2);
        } else {
            printf("Empatou!\n");
            printf("O atributo escolhido foi Pontos Turisticos!\n");
            printf("O valor dos Pontos Turisticos da Carta 1 eh: %d!\n", pontosturisticos);
            printf("O valor dos Pontos Turisticos da Carta 2 eh: %d!\n", pontosturisticos2);
        }
        break;
    case 5:
        if(densidadedemo < densidadedemo2){
            printf("A Carta 1 Venceu!\n");
            printf("O atributo escolhido foi Densidade Demografica!\n");
            printf("O valor da Densidade Demografica da Carta 1 eh: %f!\n", densidadedemo);
            printf("O valor da Densidade Demografica da Carta 2 eh: %f!\n", densidadedemo2);
        } else if (densidadedemo > densidadedemo2){
            printf("A Carta 2 Venceu!");
            printf("O atributo escolhido foi Densidade Demografica!\n");
            printf("O valor da Densidade Demografica da Carta 1 eh: %f!\n", densidadedemo);
            printf("O valor da Densidade Demografica da Carta 2 eh: %f!\n", densidadedemo2);
        } else {
            printf("Empatou!\n");
            printf("O atributo escolhido foi Densidade Demografica!\n");
            printf("O valor da Densidade Demografica da Carta 1 eh: %f!\n", densidadedemo);
            printf("O valor da Densidade Demografica da Carta 2 eh: %f!\n", densidadedemo2);
        }
        break;
     default:
        printf("Opçao Invalida...Tente novamente!!\n");
        break;
    }
    
   
    return 0;

}