#include <stdio.h>

int main(){
    //Declarações://
    int populacao, pontos; //Declara as variáveis inteiras chamadas "populacao" e "pontos" 
    char estado; //Declara uma variável de caractere chamada "estado"
    char cidade[15]; //Declara uma variável de caractere chamada "cidade"
    int codigo; //Declara uma variável de caractere chamada "codigo"
    float area, PIB; // Declara as variáveis de ponto flutuante chamadas "area" e "PIB"

    printf("Desafio Super Trunfo (Novato)");


    //Atributos que vão ser armazenados da carta 01//

    printf("Carta 01: \n");

    printf("Digite um estado: \n");
    scanf(" %c", &estado);

    printf("Digite um codigo: \n");
    scanf("%d", &codigo);

    printf("Digite uma cidade: \n");
    scanf(" %s", cidade);

    printf("Digite uma populacao: \n");
    scanf("%d", &populacao);

    printf("Digite uma area: \n");
    scanf("%f", &area);

    printf("Digite um PIB: \n");
    scanf("%f", &PIB);

    printf("Digite os pontos turisticos: \n");
    scanf("%d", &pontos);

    //Atributos que vão ser armazenados da carta 02//

    printf("Carta 02: \n");

    printf("Digite um estado: \n");
    scanf(" %c", &estado);

    printf("Digite um codigo: \n");
    scanf("%d", &codigo);

    printf("Digite uma cidade: \n");
    scanf(" %s", cidade);

    printf("Digite uma populacao: \n");
    scanf("%d", &populacao);

    printf("Digite uma area: \n");
    scanf("%f", &area);

    printf("Digite um PIB: \n");
    scanf("%f", &PIB);

    printf("Digite os pontos turisticos: \n");
    scanf("%d",  &pontos);


    //Imprime os dados que foram armazenados anteriormente referente a carta 01//

    printf("Carta 01\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%d\n", estado, codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.3f Km²\n", area);
    printf("PIB: %.3f bilhões\n", PIB);
    printf("Números de pontos turisticos: %d\n\n", pontos);

    //Imprime os dados que foram armazenados anteriormente referente a carta 02//

    printf("Carta 02\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%d\n", estado, codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.3f Km²\n", area);
    printf("PIB: %.3f bilhões\n", PIB);
    printf("Números de pontos turisticos: %d\n", pontos);

    /*
    printf("%Formato1 %Formato2 %Formato3", Variavel1 Variavel2 Variavel3)
    %d Imprime um inteiro no formato decimal.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %s: Imprime uma cadeia (string) de caracteres.
    */
     

    return 0;



}