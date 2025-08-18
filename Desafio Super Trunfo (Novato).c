#include <stdio.h>

int main(){

    printf("*** Jogo Super Trunfo ***\n");

    //Declarações das variáveis//
    unsigned long int populacao1, populacao2; 
    int pontosTuristicos1, pontosTuristicos2, codigo1, codigo2;
    char estado1, estado2; 
    char cidade1[15], cidade2[15];
    float area1, area2, PIB1, PIB2; 
    float densidade1, densidade2, percapita1, percapita2; 
    float inversoDensidade1, inversoDensidade2;
    float SuperPoder1, SuperPoder2;    
    

    //Atribuir os valores da carta 01

    printf("Carta 01: \n");

    printf("Digite um estado: \n");
    scanf(" %c", &estado1);

    printf("Digite um codigo: \n");
    scanf("%d", &codigo1);

    printf("Digite uma cidade: \n");
    scanf(" %s", cidade1);

    printf("Digite uma populacao: \n");
    scanf("%lu", &populacao1);

    printf("Digite uma area: \n");
    scanf("%f", &area1);

    printf("Digite um PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite os pontos turisticos: \n");
    scanf("%d", &pontosTuristicos1);

    densidade1 = (populacao1 / area1);
    percapita1 = (PIB1 / populacao1);
    inversoDensidade1 = (1 / densidade1);
    SuperPoder1 = (populacao1 + area1 + percapita1 + inversoDensidade1 + PIB1);

    //Atribuir os valores da carta 02

    printf("Carta 02: \n");

    printf("Digite um estado: \n");
    scanf(" %c", &estado2);

    printf("Digite um codigo: \n");
    scanf("%d", &codigo2);

    printf("Digite uma cidade: \n");
    scanf(" %s", cidade2);

    printf("Digite uma populacao: \n");
    scanf("%lu", &populacao2);

    printf("Digite uma area: \n");
    scanf("%f", &area2);

    printf("Digite um PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite os pontos turisticos: \n");
    scanf("%d", &pontosTuristicos2);

    //Calcular variáveis

    densidade2 = (populacao2 / area2); 
    percapita2 = (PIB2 / populacao2);
    inversoDensidade2 = (1 / densidade2);
    SuperPoder2 = (populacao2 + area2 + percapita2 + inversoDensidade2 + PIB2);


    //Exibir na tela os atributos armazenados anteriormente da carta 01

    printf("Carta 01\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%d\n", estado1, codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Números de pontos turisticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", percapita1);
    printf("Super Poder: %.2f\n", SuperPoder2);

    //Exibir na tela os atributos armazenados anteriormente da carta 02

    printf("Carta 02\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%d\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Números de pontos turisticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km\n", densidade2);
    printf("PIB per Capita: R$ %.2f \n", percapita2);
    printf("Super Poder: %.2f\n", SuperPoder1);

    //Comparações da carta 01 e carta 02 e exibir quem venceu

    printf("Comparação das cartas (População):\n");

    printf("Carta 01 - (%s): %lu\n", cidade1, populacao1);
    printf("Carta 02 - (%s): %lu\n", cidade2, populacao2);
    if (populacao1 > populacao2){  //Caso seja verdadeiro o valor será igual a 1
        printf("Resultado: Carta 01 (%s) venceu!\n", cidade1);
    }else{  //Se não o valor será igual a 0
        printf("Resultado: Carta 02 (%s) venceu!\n", cidade2);
    }

    printf("Comparação das cartas (Área):\n");

    printf("Carta 01 - (%s): %.2f\n", cidade1, area1);
    printf("Carta 02 - (%s): %.2f\n", cidade2, area2);
    if (area1 > area2){ //Caso seja verdadeiro o valor será igual a 1
        printf("Resultado: Carta 01 (%s) venceu!\n", cidade1);
    }else{  //Se não o valor será igual a 0
        printf("Resultado: Carta 02 (%s) venceu!\n", cidade2);
    }
    
    printf("Comparação das cartas (PIB):\n");
    
    printf("Carta 01 - (%s): %.2f\n", cidade1, PIB1);
    printf("Carta 02 - (%s): %.2f\n", cidade2, PIB2);
    if (PIB1 > PIB2){ //Caso seja verdadeiro o valor será igual a 1
        printf("Resultado: Carta 01 (%s) venceu!\n", cidade1);
    }else{ //Se não o valor será igual a 0
        printf("Resultado: Carta 02 (%s) venceu!\n", cidade2);
    }

    printf("Comparação das cartas (Densidade Populacional):\n");

    printf("Carta 01 - (%s): %.2f\n", cidade1, densidade1);
    printf("Carta 02 - (%s): %.2f\n", cidade2, densidade2);
    if (densidade1 < densidade2){ //Caso seja verdadeiro o valor será igual a 1
        printf("Resultado: Carta 01 (%s) venceu!\n", cidade1);
    }else{ //Se não o valor será igual a 0
        printf("Resultado: Carta 02 (%s) venceu!\n", cidade2);
    }

    printf("Comparação das cartas (PIB perCapita):\n");

    printf("Carta 01 - (%s): %.2f\n", cidade1, percapita1);
    printf("Carta 02 - (%s): %.2f\n", cidade2, percapita2);
    if (percapita1 > percapita2){ //Caso seja verdadeiro o valor será igual a 1
        printf("Resultado: Carta 01 (%s) venceu!\n", cidade1);
    }else{ //Se não o valor será igual a 0
        printf("Resultado: Carta 02 (%s) venceu!\n", cidade2);
    }
     

    return 0;



}