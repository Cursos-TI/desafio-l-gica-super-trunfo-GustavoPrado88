#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Desadio novato iniciante
    printf("Desafio Super Trunfo!\n");

    // Definição das variáveis para armazenar as propriedades das cidades
    char estado [10];
    char codigodacarta [4];
    char nomedacidade [15];
    float populacao;
    float area;
    float PIB;
    float numerodepontosturisticos;
    
    //Estado:
    printf("Informe o Estado: \n");
    scanf("%s", estado);

    //Código carta:
    printf("Código da carta: \n");
    scanf("%s", codigodacarta);

    //Nome da cidade
    printf("Nome da cidade: \n");
    scanf("%s", nomedacidade);

    //População:
     printf("População: \n");
    scanf("%f", populacao);

    //Área (em km²)
     printf("Area em KM²: \n");
    scanf("%f", area);


    //PIB
     printf("Informe o PIB: \n");
    scanf("%f", PIB);

    //Número de Pontos Turísticos: 
     printf("Número de pontos Turísticos: \n");
    scanf("%f", numerodepontosturisticos);


    //Final das opções selecionadas:
  printf("Seu estado é: %s \n", estado);
    printf("Código da carta é: %s\n", codigodacarta);
        printf("Sua cidade é: %s\n", nomedacidade);
        printf("Sua população atual é: %f\n", populacao);
        printf("Sua Área em KM² e de: %f\n", area);
        printf("PIB: %f\n", PIB);
        printf("Número de pontos Turísticos: %f\n", numerodepontosturisticos);


    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
