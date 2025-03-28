#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){ 

    char opcao1, opcao2;
    int cartaVencedora;
    float resultado1, resultado2;

    // dados da carta 1
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nomeCidade1[] = "Rio de Janeiro";
    int populacao1 = 6211000;
    int areaCidade1 = 1200;
    int pibCidade1 = 949301;
    int numeroPontosTuristicos1 = 200;    
    float densidade1 = populacao1 / areaCidade1;

    // dados da carta 2
    char estado2 = 'B';
    char codigo2[] = "B01";
    char nomeCidade2[] = "São Paulo";
    int populacao2 = 11451999;
    int areaCidade2 = 1521;
    int pibCidade2 = 2719751;
    int numeroPontosTuristicos2 = 100;
    float densidade2 = populacao2 / areaCidade2;


    printf("Bem-vindo ao jogo Super Trunfo!\n");
  
    printf("Escolha o primeiro atributo a ser comparado: \n");
    printf("P. População\n");
    printf("A. Área\n");
    printf("R. PIB\n");
    printf("N. Número de Pontos Turísticos\n");
    printf("D. Densidade Demográfica\n");

    scanf("%c", &opcao1);
    getchar();

    printf("Escolha o segundo atributo a ser comparado: \n");
    printf("P. População\n");
    printf("A. Área\n");
    printf("R. PIB\n");
    printf("N. Número de Pontos Turísticos\n");
    printf("D. Densidade Demográfica\n");

    scanf("%c", &opcao2);
    getchar();

    if(opcao1 == opcao2){
        printf("A comparação será pelo atributo ");
        switch (opcao1)
        {
            case 'P':
            case 'p':
                printf("População!\n");
                if(populacao1 > populacao2){
                    cartaVencedora = 1;
                }else if(populacao1 < populacao2){
                    cartaVencedora = 2;
                }else{
                    cartaVencedora = 0;
                }                
                break;

            case 'A':
            case 'a':
                printf("Área!\n");
                if(areaCidade1 > areaCidade1){
                    cartaVencedora = 1;
                }else if(areaCidade1 < areaCidade2){
                    cartaVencedora = 2;
                }else{
                    cartaVencedora = 0;
                }
                break;

            case 'R':
            case 'r':
                printf("PIB!\n");
                if(pibCidade1 > pibCidade2){
                    cartaVencedora = 1;
                }else if(pibCidade1 < pibCidade2){
                    cartaVencedora = 2;
                }else{
                    cartaVencedora = 0;
                }
                break;

            case 'N':
            case 'n':
                printf("Número de Pontos Turísticos!\n");
                if(numeroPontosTuristicos1 > numeroPontosTuristicos2){
                    cartaVencedora = 1;
                }else if(numeroPontosTuristicos1 < numeroPontosTuristicos2){
                    cartaVencedora = 2;
                }else{
                    cartaVencedora = 0;
                }
                break;                

            case 'D':
            case 'd':
                printf("Densidade Demográfica!\n");
                if(densidade1 < densidade2){
                    cartaVencedora = 1;
                }else if(densidade1 > densidade2){
                    cartaVencedora = 2;
                }else{
                    cartaVencedora = 0;
                }
                break;
            
            default:
                printf("Opção inválida!");
                break;
        }

        if(cartaVencedora > 0) {
            if(cartaVencedora == 1){
                printf("A carta vencedora foi a carta 1, %s! \n", nomeCidade1);
            } else{
                printf("A carta vencedora foi a carta 2, %s! \n", nomeCidade2);
            }
        }else{
            printf("Houve um empate! \n");
        }
    }else{
        printf("O primeiro atributo comparado será ");
        switch (opcao1)
        {
            case 'P':
            case 'p':
                printf("População!\n");
                printf("O segundo atributo comparado será ");
                switch (opcao2)
                {
                    case 'A':
                    case 'a':
                        printf("Área!\n");
                        if(populacao1 > populacao2){
                            cartaVencedora = 1;
                        }else if(populacao1 < populacao2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }

                        if(areaCidade1 > areaCidade2){
                            cartaVencedora = 1;
                        }else if(areaCidade1 < areaCidade2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        resultado1 = populacao1 + areaCidade1;
                        resultado2 = populacao2 + areaCidade2;
                        if(resultado1 > resultado2){
                            cartaVencedora = 1;
                        }else if(resultado1 < resultado2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        break;

                    case 'R':
                    case 'r':
                        printf("PIB!\n");
                        if(populacao1 > populacao2){
                            cartaVencedora = 1;
                        }else if(populacao1 < populacao2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }

                        if(pibCidade1 > pibCidade2){
                            cartaVencedora = 1;
                        }else if(pibCidade1 < pibCidade2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        resultado1 = populacao1 + pibCidade1;
                        resultado2 = populacao1 + pibCidade2;
                        if(resultado1 > resultado2){
                            cartaVencedora = 1;
                        }else if(resultado1 < resultado2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        break;

                    case 'N':
                    case 'n':
                        printf("Número de Pontos Turísticos!\n");
                        if(populacao1 > populacao2){
                            cartaVencedora = 1;
                        }else if(populacao1 < populacao2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }

                        if(numeroPontosTuristicos1 > numeroPontosTuristicos2){
                            cartaVencedora = 1;
                        }else if(numeroPontosTuristicos1 < numeroPontosTuristicos2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        resultado1 = populacao1 + numeroPontosTuristicos1;
                        resultado2 = populacao1 + numeroPontosTuristicos2;
                        if(resultado1 > resultado2){
                            cartaVencedora = 1;
                        }else if(resultado1 < resultado2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        break;

                    case 'D':
                    case 'd':
                        printf("Densidade Demográfica!\n");
                        if(populacao1 > populacao2){
                            cartaVencedora = 1;
                        }else if(populacao1 < populacao2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }

                        if(densidade1 < densidade2){
                            cartaVencedora = 1;
                        }else if(densidade1 > densidade2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        resultado1 = populacao1 + densidade1;
                        resultado2 = populacao1 + densidade2;
                        if(resultado1 > resultado2){
                            cartaVencedora = 1;
                        }else if(resultado1 < resultado2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        break;
                    
                    default:
                        printf("Opção 2 inválida!");
                        break;
                }              
                break;

            case 'A':
            case 'a':
                printf("Área!\n");
                printf("O segundo atributo comparado será ");
                switch (opcao2)
                {
                    case 'P':
                    case 'p':
                        printf("População!\n");
                        if(areaCidade1 > areaCidade2){
                            cartaVencedora = 1;
                        }else if(areaCidade1 < areaCidade2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }

                        if(populacao1 > populacao2){
                            cartaVencedora = 1;
                        }else if(populacao1 < populacao2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        resultado1 = populacao1 + areaCidade1;
                        resultado2 = populacao2 + areaCidade2;
                        if(resultado1 > resultado2){
                            cartaVencedora = 1;
                        }else if(resultado1 < resultado2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        break;

                    case 'R':
                    case 'r':
                        printf("PIB!\n");
                        if(areaCidade1 > areaCidade2){
                            cartaVencedora = 1;
                        }else if(areaCidade1 < areaCidade2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }

                        if(pibCidade1 > pibCidade2){
                            cartaVencedora = 1;
                        }else if(pibCidade1 < pibCidade2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        resultado1 = areaCidade1 + pibCidade1;
                        resultado2 = areaCidade2 + pibCidade2;
                        if(resultado1 > resultado2){
                            cartaVencedora = 1;
                        }else if(resultado1 < resultado2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        break;

                    case 'N':
                    case 'n':
                        printf("Número de Pontos Turísticos!\n");
                        if(areaCidade1 > areaCidade2){
                            cartaVencedora = 1;
                        }else if(areaCidade1 < areaCidade2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }

                        if(numeroPontosTuristicos1 > numeroPontosTuristicos2){
                            cartaVencedora = 1;
                        }else if(numeroPontosTuristicos1 < numeroPontosTuristicos2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        resultado1 = areaCidade1 + numeroPontosTuristicos1;
                        resultado2 = areaCidade2 + numeroPontosTuristicos2;
                        if(resultado1 > resultado2){
                            cartaVencedora = 1;
                        }else if(resultado1 < resultado2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        break;

                    case 'D':
                    case 'd':
                        printf("Densidade Demográfica!\n");
                        if(areaCidade1 > areaCidade2){
                            cartaVencedora = 1;
                        }else if(areaCidade1 < areaCidade2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }

                        if(densidade1 < densidade2){
                            cartaVencedora = 1;
                        }else if(densidade1 > densidade2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        resultado1 = areaCidade1 + densidade1;
                        resultado2 = areaCidade2 + densidade2;
                        if(resultado1 > resultado2){
                            cartaVencedora = 1;
                        }else if(resultado1 < resultado2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        break;
                    
                    default:
                        printf("Opção 2 inválida!");
                        break;
                } 
                break;

            case 'R':
            case 'r':
                printf("PIB!\n");
                printf("O segundo atributo comparado será ");
                switch (opcao2)
                {
                    case 'P':
                    case 'p':
                        printf("População!\n");
                        if(pibCidade1 > pibCidade2){
                            cartaVencedora = 1;
                        }else if(pibCidade1 < pibCidade2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        
                        if(populacao1 > populacao2){
                            cartaVencedora = 1;
                        }else if(populacao1 < populacao2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        resultado1 = populacao1 + pibCidade1;
                        resultado2 = populacao1 + pibCidade2;
                        if(resultado1 > resultado2){
                            cartaVencedora = 1;
                        }else if(resultado1 < resultado2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        break;

                    case 'A':
                    case 'a':
                        printf("Área!\n");
                        if(pibCidade1 > pibCidade2){
                            cartaVencedora = 1;
                        }else if(pibCidade1 < pibCidade2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }

                        if(areaCidade1 > areaCidade2){
                            cartaVencedora = 1;
                        }else if(areaCidade1 < areaCidade2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        resultado1 = pibCidade1 + areaCidade1;
                        resultado2 = pibCidade2 + areaCidade2;
                        if(resultado1 > resultado2){
                            cartaVencedora = 1;
                        }else if(resultado1 < resultado2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        break;                   

                    case 'N':
                    case 'n':
                        printf("Número de Pontos Turísticos!\n");
                        if(pibCidade1 > pibCidade2){
                            cartaVencedora = 1;
                        }else if(pibCidade1 < pibCidade2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }

                        if(numeroPontosTuristicos1 > numeroPontosTuristicos2){
                            cartaVencedora = 1;
                        }else if(numeroPontosTuristicos1 < numeroPontosTuristicos2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        resultado1 = pibCidade1 + numeroPontosTuristicos1;
                        resultado2 = pibCidade2 + numeroPontosTuristicos2;
                        if(resultado1 > resultado2){
                            cartaVencedora = 1;
                        }else if(resultado1 < resultado2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        break;

                    case 'D':
                    case 'd':
                        printf("Densidade Demográfica!\n");
                        if(pibCidade1 > pibCidade2){
                            cartaVencedora = 1;
                        }else if(pibCidade1 < pibCidade2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }

                        if(densidade1 < densidade2){
                            cartaVencedora = 1;
                        }else if(densidade1 > densidade2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        resultado1 = pibCidade1 + densidade1;
                        resultado2 = pibCidade2 + densidade2;
                        if(resultado1 > resultado2){
                            cartaVencedora = 1;
                        }else if(resultado1 < resultado2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        break;
                    
                    default:
                        printf("Opção 2 inválida!");
                        break;
                } 
                break;

            case 'N':
            case 'n':
                printf("Número de Pontos Turísticos!\n");
                printf("O segundo atributo comparado será ");
                switch (opcao2)
                {
                    case 'P':
                    case 'p':
                        printf("População!\n");
                        if(numeroPontosTuristicos1 > numeroPontosTuristicos2){
                            cartaVencedora = 1;
                        }else if(numeroPontosTuristicos1 < numeroPontosTuristicos2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }

                        if(populacao1 > populacao2){
                            cartaVencedora = 1;
                        }else if(populacao1 < populacao2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        resultado1 = populacao1 + numeroPontosTuristicos1;
                        resultado2 = populacao2 + numeroPontosTuristicos2;
                        if(resultado1 > resultado2){
                            cartaVencedora = 1;
                        }else if(resultado1 < resultado2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        break;

                    case 'A':
                    case 'a':
                        printf("Área!\n");
                        if(areaCidade1 > areaCidade2){
                            cartaVencedora = 1;
                        }else if(areaCidade1 < areaCidade2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }

                        if(numeroPontosTuristicos1 > numeroPontosTuristicos2){
                            cartaVencedora = 1;
                        }else if(numeroPontosTuristicos1 < numeroPontosTuristicos2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        resultado1 = areaCidade1 + numeroPontosTuristicos1;
                        resultado2 = areaCidade2 + numeroPontosTuristicos2;
                        if(resultado1 > resultado2){
                            cartaVencedora = 1;
                        }else if(resultado1 < resultado2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        break;

                    case 'R':
                    case 'r':
                        printf("PIB!\n");
                        if(numeroPontosTuristicos1 > numeroPontosTuristicos2){
                            cartaVencedora = 1;
                        }else if(numeroPontosTuristicos1 < numeroPontosTuristicos2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }

                        if(pibCidade1 > pibCidade2){
                            cartaVencedora = 1;
                        }else if(pibCidade1 < pibCidade2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        resultado1 = numeroPontosTuristicos1 + pibCidade1;
                        resultado2 = numeroPontosTuristicos2 + pibCidade2;
                        if(resultado1 > resultado2){
                            cartaVencedora = 1;
                        }else if(resultado1 < resultado2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        break;

                    case 'D':
                    case 'd':
                        printf("Densidade Demográfica!\n");
                        if(numeroPontosTuristicos1 > numeroPontosTuristicos2){
                            cartaVencedora = 1;
                        }else if(numeroPontosTuristicos1 < numeroPontosTuristicos2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }

                        if(densidade1 < densidade2){
                            cartaVencedora = 1;
                        }else if(densidade1 > densidade2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        resultado1 = numeroPontosTuristicos1 + densidade1;
                        resultado2 = numeroPontosTuristicos2 + densidade2;
                        if(resultado1 > resultado2){
                            cartaVencedora = 1;
                        }else if(resultado1 < resultado2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        break;
                    
                    default:
                        printf("Opção 2 inválida!");
                        break;
                } 
                break;
                
            case 'D':
            case 'd':
                printf("Densidade Demográfica!\n");
                printf("O segundo atributo comparado será ");
                switch (opcao2)
                {
                    case 'P':
                    case 'p':
                        printf("População!\n");
                        if(densidade1 < densidade2){
                            cartaVencedora = 1;
                        }else if(densidade1 > densidade2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }

                        if(populacao1 > populacao2){
                            cartaVencedora = 1;
                        }else if(populacao1 < populacao2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        resultado1 = populacao1 + numeroPontosTuristicos1;
                        resultado2 = populacao2 + numeroPontosTuristicos2;
                        if(resultado1 > resultado2){
                            cartaVencedora = 1;
                        }else if(resultado1 < resultado2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        break;

                    case 'A':
                    case 'a':
                        printf("Área!\n");
                        if(densidade1 < densidade2){
                            cartaVencedora = 1;
                        }else if(densidade1 > densidade2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }

                        if(numeroPontosTuristicos1 > numeroPontosTuristicos2){
                            cartaVencedora = 1;
                        }else if(numeroPontosTuristicos1 < numeroPontosTuristicos2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        resultado1 = areaCidade1 + numeroPontosTuristicos1;
                        resultado2 = areaCidade2 + numeroPontosTuristicos2;
                        if(resultado1 > resultado2){
                            cartaVencedora = 1;
                        }else if(resultado1 < resultado2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        break;

                    case 'R':
                    case 'r':
                        printf("PIB!\n");
                        if(densidade1 < densidade2){
                            cartaVencedora = 1;
                        }else if(densidade1 > densidade2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }

                        if(pibCidade1 > pibCidade2){
                            cartaVencedora = 1;
                        }else if(pibCidade1 < pibCidade2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        resultado1 = numeroPontosTuristicos1 + pibCidade1;
                        resultado2 = numeroPontosTuristicos2 + pibCidade2;
                        if(resultado1 > resultado2){
                            cartaVencedora = 1;
                        }else if(resultado1 < resultado2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        break;

                    case 'N':
                    case 'n':
                        printf("Número de Pontos Turísticos!\n");
                        if(densidade1 < densidade2){
                            cartaVencedora = 1;
                        }else if(densidade1 > densidade2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }

                        if(numeroPontosTuristicos1 > numeroPontosTuristicos2){
                            cartaVencedora = 1;
                        }else if(numeroPontosTuristicos1 < numeroPontosTuristicos2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        resultado1 = numeroPontosTuristicos1 + densidade1;
                        resultado2 = numeroPontosTuristicos2 + densidade2;
                        if(resultado1 > resultado2){
                            cartaVencedora = 1;
                        }else if(resultado1 < resultado2){
                            cartaVencedora = 2;
                        }else{
                            cartaVencedora = 0;
                        }
                        break;
                    
                    default:
                        printf("Opção 2 inválida!");
                        break;
                } 
                break;
            
            default:
                printf("Opção 1 inválida!");
                break;
        }

        if(cartaVencedora > 0) {
            if(cartaVencedora == 1){
                printf("A carta vencedora foi a carta 1, %s! \n", nomeCidade1);
            } else{
                printf("A carta vencedora foi a carta 2, %s! \n", nomeCidade2);
            }
        }else{
            printf("Houve um empate! \n");
        }
    }
}