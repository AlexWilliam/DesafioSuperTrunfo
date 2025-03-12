#include <stdio.h>
#include <stdlib.h>

void main(){ // optei pela utilização de void, não há necessidade de retorno int para a função

    /* Disclamier sobre utilização de funções no código:
        - fgets: por algum motivo, em alguns casos a instrução estava pulando devido ao \n do stdin
        - getchar: foi utilizado para eliminar o \n do stdin
        - strcspn: remover o \n no fim do nome e do codigo, para formatar a saida mais bonito
        - strtof: utilizado para conversão dos dados float para exibição

    Utilizei essas funções devido ao fato de que o scanf estar gerando muitos problemas com os inputs seguidos.
    */

    char estado1, estado2;
    char codigo1[5], codigo2[5], nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2, numeroPontosTuristicos1, numeroPontosTuristicos2;
    float areaCidade1, areaCidade2, pibCidade1, pibCidade2;
    char buffer[100]; // buffer para utilizar fgets em numeros inteiros e float

    // dados da cidade 1
    printf("Digite o estado da carta 1:(Letra de A até H)\n");
    scanf(" %c", &estado1);
    getchar();

    printf("Digite o código da carta 1:(A letra do estado + 2 números inteiros)\n");
    fgets(codigo1, 5, stdin);
    codigo1[strcspn(codigo1, "\n")] = '\0';

    printf("Digite o nome da cidade 1:\n");
    fgets(nomeCidade1, 50, stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0';

    printf("Digite a população da cidade 1:(em numeros)\n");
    fgets(buffer, sizeof(buffer),stdin);
    populacao1 = strtof(buffer, NULL);

    printf("Digite a área da cidade 1:(em numeros, com decimal separado por .)\n");
    fgets(buffer, sizeof(buffer), stdin);
    areaCidade1 = strtof(buffer, NULL);

    printf("Digite o PIB da cidade 1:(em numeros, com decimal separado por .)\n");
    fgets(buffer, sizeof(buffer), stdin);
    pibCidade1 = strtof(buffer, NULL);

    printf("Digite a quantidade de pontos turisticos da cidade 1:(em numeros)\n");
    fgets(buffer, sizeof(buffer),stdin);
    numeroPontosTuristicos1 = strtof(buffer, NULL);

    printf("\n");
    printf("Carta 1:");
    printf("\n\tEstado: %c", estado1);
    printf("\n\tCódigo: %s", codigo1);
    printf("\n\tNome da Cidade: %s", nomeCidade1);
    printf("\n\tPopulação: %d", populacao1);
    printf("\n\tÁrea: %.2f Km²", areaCidade1);
    printf("\n\tPIB: %.2f bilhões de reais", pibCidade1);
    printf("\n\tNúmero de Pontos Turísticos: %d", numeroPontosTuristicos1);

    printf("\n\n");

    fflush(stdin);

    // dados da cidade 2
    printf("Digite o estado da carta 2:(Letra de A até H)\n");
    scanf(" %c", &estado2);
    getchar();

    printf("Digite o código da carta 2:(A letra do estado + 2 números inteiros)\n");
    fgets(codigo2, 5, stdin);    
    codigo2[strcspn(codigo2, "\n")] = '\0';

    printf("Digite o nome da cidade 2:\n");
    fgets(nomeCidade2, 50, stdin);    
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';

    printf("Digite a população da cidade 2:(em numeros)\n");
    fgets(buffer, sizeof(buffer),stdin);
    populacao2 = strtof(buffer, NULL);

    printf("Digite a área da cidade 2:(em numeros, com decimal separado por .)\n");
    fgets(buffer, sizeof(buffer), stdin);
    areaCidade2 = strtof(buffer, NULL);

    printf("Digite o PIB da cidade 2:(em numeros, com decimal separado por .)\n");
    fgets(buffer, sizeof(buffer), stdin);
    pibCidade2 = strtof(buffer, NULL);

    printf("Digite a quantidade de pontos turisticos da cidade 2:(em numeros)\n");
    fgets(buffer, sizeof(buffer),stdin);
    numeroPontosTuristicos2 = strtof(buffer, NULL);

    printf("\n");
    printf("Carta 2:");
    printf("\n\tEstado: %c", estado2);
    printf("\n\tCódigo: %s", codigo2);
    printf("\n\tNome da Cidade: %s", nomeCidade2);
    printf("\n\tPopulação: %d", populacao2);
    printf("\n\tÁrea: %.2f Km²", areaCidade2);
    printf("\n\tPIB: %.2f bilhões de reais", pibCidade2);
    printf("\n\tNúmero de Pontos Turísticos: %d", numeroPontosTuristicos2);
}