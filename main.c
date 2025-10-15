/*
!!! Aviso adicional !!!
Estimado professor Sergio Cardoso, por questõe de prática, melhor elucidação do código e profissionalismo na documentação,
eu irei incluir nesse código uma versão de comentários em inglês. Para fins de identificação acadêmica, irei colocar a disposição minhas informações abaixo.
------------------------------------------------------------------------------------
Aluno: Francisco Gomes da Silva Junior
Período: 1º
Curso: Ciência da Computação
Cidade: Recife
Polo: Abdias de Carvalho
OBS.: Data e versão não seriam necessárias visto que cada commit irá constar tais informações.
------------------------------------------------------------------------------------
*/

#include <stdio.h>  // Biblioteca para entrada e leitura de dados. Library for read and input data user
#include <string.h> // Inserir essa biblioteca para manipulação de String. Library called for manipulation data String

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
    // Área para definição das variáveis para armazenar as propriedades das cidades. // Section of variables cards A and B
    // Seção dos dados da Carta A. Section data of card A
    char state_a[2];
    char card_code_a[5];
    char name_city_a[20];
    unsigned long int population_city_a;
    float area_a, pib_city_a;
    int number_points_touristics_a;
    float density_population_a;
    float pib_per_capita_a;
    long int power_card_a;
    unsigned int counter_power_card_a = 0;

    //------------ End data head card A ------------

    char state_b[2];
    char card_code_b[5];
    char name_city_b[20];
    unsigned long int population_city_b;
    float area_b, pib_city_b;
    int number_points_touristics_b;
    float density_population_b;
    float pib_per_capita_b;
    long int power_card_b;
    unsigned int counter_power_card_b = 0;

    //------------ End data head card B ------------
    // Input of option user for comparation attribute of cards
    int option_comparation;
    //-------------------------------------------------------
    int option_comparation_one;
    int option_comparation_two;
    //-------------------------------------------------------
    // Variables assistents for implementation (Level - Master)
    unsigned long int sum_card_a;
    unsigned long int sum_card_b;

    //-------------------------------------------------------

    // Área para entrada de dados. Section of input data user
    printf("-------------- DATA OF CARD [A] --------------\n");
    printf("Help data input: enter with a letter in between A-H\n");
    printf("Suporte ao usuário: digite uma letra do alfabeto entre A-H\n");
    printf("Enter with a first state: \n");
    scanf(" %s", state_a);

    printf("Help data input: enter with a number in between 01-04\n");
    printf("Suporte ao usuário: digite um número entre 01-04\n");
    printf("Enter with a card code: \n");
    scanf(" %s", card_code_a);

    getchar(); // Cleaning of \n in buffer of variable

    printf("Help data input: writing name of city, not inserting number\n");
    printf("Suporte ao usuário: digite o nome da cidade, não inserir número\n");
    printf("Enter with a name city: \n");
    fgets(name_city_a, sizeof(name_city_a), stdin);

    printf("Help data input: input with number of amount population city A. number type integer\n");
    printf("Suporte ao usuário: digite o número da população da cidade A. Tipo número: inteiro\n");
    printf("Enter with a population A: \n");
    scanf("%ld", &population_city_a);

    printf("Help data input: input a value of area city in KM². Type data: float\n");
    printf("Suporte ao usuário: entre com um valor da área da cidade em KM². Tipo de dado: número decimal\n");
    printf("Enter with a value of area city A: \n");
    scanf("%f", &area_a);

    printf("Help data input: input a value of PIB brute of city A. Type number: float\n");
    printf("Suporte ao usuário: entre com o valor do PIB bruto da cidade A. Tipo número: número decimal\n");
    printf("Enter with a value of PIB city A: \n");
    scanf("%f", &pib_city_a);

    printf("Help data input: input of numbers points touristics of city A. Type data: integer\n");
    printf("Suporte ao usuário: entre com o número de pontos turísticos da cidade A. Tipo de dado: inteiro\n");
    printf("Enter with a amount points touristics in city A: \n");
    scanf("%d", &number_points_touristics_a);
    printf("\n");

    printf("-------------- END DATA CARD [A] ---------------\n");

    printf("-------------- DATA OF CARD [B] --------------\n");
    printf("Help data input: enter with a letter in between A-H\n");
    printf("Suporte ao usuário: digite uma letra do alfabeto entre A-H\n");
    printf("Enter with a first state: \n");
    scanf(" %s", state_b);

    printf("Help data input: enter with a number in between 01-04\n");
    printf("Suporte ao usuário: digite um número entre 01-04\n");
    printf("Enter with a card code: \n");
    scanf(" %s", card_code_b);

    getchar(); // Cleaning of \n in buffer of variable

    printf("Help data input: writing name of city, not inserting number\n");
    printf("Suporte ao usuário: digite o nome da cidade, não inserir número\n");
    printf("Enter with a name city: \n");
    fgets(name_city_b, sizeof(name_city_b), stdin);

    printf("Help data input: input with number of amount population city B. number type integer\n");
    printf("Suporte ao usuário: digite o número da população da cidade B. Tipo número: inteiro\n");
    printf("Enter with a population B: \n");
    scanf("%ld", &population_city_b);

    printf("Help data input: input a value of area city in KM². Type data: float\n");
    printf("Suporte ao usuário: entre com um valor da área da cidade em KM². Tipo de dado: número decimal\n");
    printf("Enter with a value of area city B: \n");
    scanf("%f", &area_b);

    printf("Help data input: input a value of PIB brute of city B. Type number: float\n");
    printf("Suporte ao usuário: entre com o valor do PIB bruto da cidade B. Tipo número: número decimal\n");
    printf("Enter with a value of PIB city B: \n");
    scanf("%f", &pib_city_b);

    printf("Help data input: input of numbers points touristics of city B. Type data: integer\n");
    printf("Suporte ao usuário: entre com o número de pontos turísticos da cidade B. Tipo de dado: inteiro\n");
    printf("Enter with a amount points touristics in city B: \n");
    scanf("%d", &number_points_touristics_b);

    printf("-------------- END DATA CARD [B] ---------------\n");

    //------------------ Calculate Population density and PIB per capita ------------------
    //------------------ CARD [A] ------------------
    density_population_a = population_city_a / area_a;
    pib_per_capita_a = pib_city_a / population_city_a;

    //------------------ CARD [B] ------------------
    density_population_b = population_city_b / area_b;
    pib_per_capita_b = pib_city_b / population_city_b;

    //-------------------------------------------------------------------------------------
    // Calculating power of cards
    power_card_a = population_city_a + (float)area_a + (float)pib_city_a + (int)number_points_touristics_a + (float)pib_per_capita_a;
    power_card_b = population_city_b + (float)area_b + (float)pib_city_b + (int)number_points_touristics_b + (float)pib_per_capita_b;

    // Área para exibição dos dados da cidade
    printf("----------- Dados da carta A -----------\n");
    printf("State: %s\n", state_a);
    printf("Card code A: %s%s\n", state_a, card_code_a);
    printf("Name of city: %s\n", name_city_a);
    printf("Population A: %ld\n", population_city_a);
    printf("Area city A: %.2f\n", area_a);
    printf("PIB city A: %.2f\n", pib_city_a);
    printf("Number points touristics A: %d\n", number_points_touristics_a);
    printf("The density population A is: %.2f hab/km²\n", density_population_a);
    printf("The PIB per capita of population A: %.2f Reais\n", pib_per_capita_a);

    printf("----------- Dados da carta B -----------\n");
    printf("State: %s\n", state_b);
    printf("Card code B: %s%s\n", state_b, card_code_b);
    printf("Name of city: %s\n", name_city_b);
    printf("Population B: %ld\n", population_city_b);
    printf("Area city B: %.2f\n", area_b);
    printf("PIB city B: %.2f\n", pib_city_b);
    printf("Number points touristics B: %d\n", number_points_touristics_b);
    printf("The density population B is: %.2f hab/km²\n", density_population_b);
    printf("The PIB per capita of population B: %.2f Reais\n", pib_per_capita_b);

    //---------------------------------------------------------------------------------------------------

    // Input data of user for option comparation
    printf("User, input a number for operation: \n");
    printf("1 - Population / Populacao\n");
    printf("2 - Area City / Area cidade\n");
    printf("3 - PIB City / PIB Cidade\n");
    printf("4 - Number Points touristics / Numero de pontos turisticos\n");
    printf("5 - Density population / Densidade populacional\n");
    scanf("%d", &option_comparation);

    //--------------- Structure of option using loop switch-case ---------------
    switch (option_comparation)
    {
    case 1:
        if (population_city_a > population_city_b)
        {
            printf("%s VS %s \n", name_city_a, name_city_b);
            printf("Attribute selected for comparation is population\n");
            printf("%ld x %ld\n", population_city_a, population_city_b);
            printf("The card 1 is win (1)\n");
            printf("A carta 1 venceu (1)\n");
        }
        else
        {
            printf("%s VS %s", name_city_a, name_city_b);
            printf("Attribute select for comparation is population\n");
            printf("%ld x %ld\n", population_city_a, population_city_b);
            printf("The card 2 is win (0)\n");
            printf("A carta 2 venceu (0)\n");
        }
        break;
    case 2:
        if (area_a > area_b)
        {
            printf("%s VS %s \n", name_city_a, name_city_b);
            printf("The attribute selected for comparation is Area of City\n");
            printf("%.2f X %.2f \n", area_a, area_b);
            printf("The card 1 win (1)\n");
            printf("A carta 1 venceu (1)\n");
        }
        else
        {
            printf("%s VS %s \n", name_city_a, name_city_b);
            printf("The attribute selected for comparation is Area of City\n");
            printf("%.2f X %.2f \n", area_a, area_b);
            printf("The card 2 win (0)\n");
            printf("A carta 2 venceu (0)\n");
        }
        break;

    case 3:
        if (pib_city_a > pib_city_b)
        {
            printf("%s VS %s \n", name_city_a, name_city_b);
            printf("The attribute selected for comparation is PIB of city\n");
            printf("%.2f X %.2f \n", pib_city_a, pib_city_b);
            printf("The card 1 win (1)\n");
            printf("A carta 1 venceu (1)\n");
        }
        else
        {
            printf("%s VS %s \n", name_city_a, name_city_b);
            printf("The attribute selected for comparation is PIB of city\n");
            printf("%.2f X %.2f \n", pib_city_a, pib_city_b);
            printf("The card 2 win (0)\n");
            printf("A carta 2 venceu (0)\n");
        }
        break;
    case 4:
        if (number_points_touristics_a > number_points_touristics_b)
        {
            printf("%s VS %s", name_city_a, name_city_b);
            printf("The attribute selected for comparation is Number points touristics");
            printf("%d X %d \n", number_points_touristics_a, number_points_touristics_b);
            printf("The card 1 win (1)\n");
            printf("A carta 1 venceu (1)");
        }
        else
        {
            printf("%s VS %s ", name_city_a, name_city_b);
            printf("The attribute selected for comparation is Number points touristics\n");
            printf("%d X %d", number_points_touristics_a, number_points_touristics_b);
            printf("The card 2 win (0)\n");
            printf("A carta 2 venceu (0)\n");
        }
    case 5:
        if (density_population_a > density_population_b)
        {
            printf("%s VS %s ", name_city_a, name_city_b);
            printf("The attribute selected for comparation if density population\n");
            printf("%.2f X %.2f\n", density_population_a, density_population_b);
            printf("The card 2 win (0)\n");
            printf("A carta 2 venceu (0)\n");
        }
        else
        {
            printf("%s VS %s ", name_city_a, name_city_b);
            printf("The attribute selected for comparation if density population \n");
            printf("%.2f X %.2f", density_population_a, density_population_b);
            printf("The card 1 win (1)\n");
            printf("A carta 1 venceu (1)\n");
        }
        break;

    default:
        printf("option invalid, try again!\n");
        printf("Opcao invalida, tente novamente");
    }

    /*
    Implementation of user menu interactive (level Master)
    Implementação do menu interativo com usuário (Nível Mestre)
    */
    printf("****** Menu of comparation power cards *******\n");
    printf("Menu for selected attributes for comparation\n");
    printf("1 - population of city\n");
    printf("2 - Area of city\n");
    printf("3 - PIB of city\n");
    printf("4 - Points touristics of city\n");
    printf("5 - Density population\n");
    printf("6 - PIB per capita\n");
    scanf("%d", &option_comparation_one);
    scanf("%d", &option_comparation_two);

    if (option_comparation_one == 1 && option_comparation_two == 2)
    {
        printf("%s VS %s\n", name_city_a, name_city_b);
        printf("The attributes for comparate is Population and area of city\n");
        printf("%ld - %ld\n", population_city_a, population_city_b);
        printf("%.2f - %.2f\n", area_a, area_b);
        printf("Card A = %ld\n", sum_card_a = population_city_a + area_a);
        printf("Card B = %ld", sum_card_b = population_city_b + area_b);
        if (sum_card_a > sum_card_b)
        {
            printf("Card A win (1)");
            printf("Carta A venceu (1)");
        }
        else
        {
            printf("Card B win (0)");
            printf("Carta B venceu (0)");
        }
    }

    if (option_comparation_one == 1 && option_comparation_two == 3)
    {
        printf("%s VS %s\n", name_city_a, name_city_b);
        printf("The attributes for comparate is Population and PIB of city\n");
        printf("%ld - %ld\n", population_city_a, population_city_b);
        printf("%.2f - %.2f\n", pib_city_a, pib_city_b);
        printf("Card A = %ld\n", sum_card_a = population_city_a + pib_city_a);
        printf("Card B = %ld", sum_card_b = population_city_b + pib_city_b);
        if (sum_card_a > sum_card_b)
        {
            printf("Card A win (1)");
            printf("Carta A venceu (1)");
        }
        else
        {
            printf("Card B win (0)");
            printf("Carta B venceu (0)");
        }
    }
    if (option_comparation_one == 1 && option_comparation_two == 4)
    {
        printf("%s VS %s\n", name_city_a, name_city_b);
        printf("The attributes for comparate is Population and points touristics of city\n");
        printf("%ld - %ld\n", population_city_a, population_city_b);
        printf("%d - %d\n", number_points_touristics_a, number_points_touristics_b);
        printf("Card A = %ld\n", sum_card_a = population_city_a + number_points_touristics_a);
        printf("Card B = %ld", sum_card_b = population_city_b + number_points_touristics_b);
        if (sum_card_a > sum_card_b)
        {
            printf("Card A win (1)");
            printf("Carta A venceu (1)");
        }
        else
        {
            printf("Card B win (0)");
            printf("Carta B venceu (0)");
        }
    }

    if (option_comparation_one == 1 && option_comparation_two == 5)
    {
        printf("%s VS %s\n", name_city_a, name_city_b);
        printf("The attributes for comparate is Population and Density of population\n");
        printf("%ld - %ld\n", population_city_a, population_city_b);
        printf("%.2f - %.2f\n", area_a, area_b);
        printf("Card A = %ld\n", sum_card_a = population_city_a + density_population_a);
        printf("Card B = %ld", sum_card_b = population_city_b + density_population_b);
        if (sum_card_a > sum_card_b)
        {
            printf("Card A win (1)");
            printf("Carta A venceu (1)");
        }
        else
        {
            printf("Card B win (0)");
            printf("Carta B venceu (0)");
        }
    }

    if (option_comparation_one == 1 && option_comparation_two == 6)
    {
        printf("%s VS %s\n", name_city_a, name_city_b);
        printf("The attributes for comparate is Population and PIB per capita\n");
        printf("%ld - %ld\n", population_city_a, population_city_b);
        printf("%.2f - %.2f\n", pib_per_capita_a, pib_per_capita_b);
        printf("Card A = %ld\n", sum_card_a = population_city_a + pib_per_capita_a);
        printf("Card B = %ld", sum_card_b = population_city_b + pib_per_capita_b);
        if (sum_card_a > sum_card_b)
        {
            printf("Card A win (1)");
            printf("Carta A venceu (1)");
        }
        else
        {
            printf("Card B win (0)");
            printf("Carta B venceu (0)");
        }
    }

    if (option_comparation_one == 2 && option_comparation_two == 3)
    {
        printf("%s VS %s\n", name_city_a, name_city_b);
        printf("The attributes for comparate is area of city and PIB of city\n");
        printf("%.2f - %.2f\n", area_a, area_b);
        printf("%.2f - %.2f\n", pib_city_a, pib_city_b);
        printf("Card A = %ld\n", sum_card_a = area_a + pib_city_a);
        printf("Card B = %ld", sum_card_b = area_b + pib_city_b);
        if (sum_card_a > sum_card_b)
        {
            printf("Card A win (1)");
            printf("Carta A venceu (1)");
        }
        else
        {
            printf("Card B win (0)");
            printf("Carta B venceu (0)");
        }
    }

    if (option_comparation_one == 2 && option_comparation_two == 4)
    {
        printf("%s VS %s\n", name_city_a, name_city_b);
        printf("The attributes for comparate is area of city and Number points touristics\n");
        printf("%.2f - %.2f\n", area_a, area_b);
        printf("%d - %d\n", number_points_touristics_a, number_points_touristics_b);
        printf("Card A = %ld\n", sum_card_a = area_a + number_points_touristics_a);
        printf("Card B = %ld", sum_card_b = area_b + number_points_touristics_b);
        if (sum_card_a > sum_card_b)
        {
            printf("Card A win (1)");
            printf("Carta A venceu (1)");
        }
        else
        {
            printf("Card B win (0)");
            printf("Carta B venceu (0)");
        }
    }

    if (option_comparation_one == 2 && option_comparation_two == 5)
    {
        printf("%s VS %s\n", name_city_a, name_city_b);
        printf("The attributes for comparate is area of city and Density population\n");
        printf("%.2f - %.2f\n", area_a, area_b);
        printf("%.2f - %.2f\n", density_population_a, density_population_b);
        printf("Card A = %ld\n", sum_card_a = area_a + density_population_a);
        printf("Card B = %ld", sum_card_b = area_b + density_population_b);
        if (sum_card_a > sum_card_b)
        {
            printf("Card A win (1)");
            printf("Carta A venceu (1)");
        }
        else
        {
            printf("Card B win (0)");
            printf("Carta B venceu (0)");
        }
    }

    if (option_comparation_one == 2 && option_comparation_two == 6)
    {
        printf("%s VS %s\n", name_city_a, name_city_b);
        printf("The attributes for comparate is area of city and PIB per capita\n");
        printf("%.2f - %.2f\n", area_a, area_b);
        printf("%.2f - %.2f\n", pib_per_capita_a, pib_per_capita_b);
        printf("Card A = %ld\n", sum_card_a = area_a + pib_per_capita_a);
        printf("Card B = %ld", sum_card_b = area_b + pib_per_capita_b);
        if (sum_card_a > sum_card_b)
        {
            printf("Card A win (1)");
            printf("Carta A venceu (1)");
        }
        else
        {
            printf("Card B win (0)");
            printf("Carta B venceu (0)");
        }
    }

    if (option_comparation_one == 3 && option_comparation_two == 4)
    {
        printf("%s VS %s\n", name_city_a, name_city_b);
        printf("The attributes for comparate is PIB of city and Number Points touristics\n");
        printf("%.2f - %.2f\n", pib_city_a, pib_city_b);
        printf("%d - %d\n", number_points_touristics_a, number_points_touristics_b);
        printf("Card A = %ld\n", sum_card_a = pib_city_a + number_points_touristics_a);
        printf("Card B = %ld", sum_card_b = pib_city_b + number_points_touristics_b);
        if (sum_card_a > sum_card_b)
        {
            printf("Card A win (1)");
            printf("Carta A venceu (1)");
        }
        else
        {
            printf("Card B win (0)");
            printf("Carta B venceu (0)");
        }
    }

    if (option_comparation_one == 3 && option_comparation_two == 5)
    {
        printf("%s VS %s\n", name_city_a, name_city_b);
        printf("The attributes for comparate is PIB of city and density population\n");
        printf("%.2f - %.2f\n", pib_city_a, pib_city_b);
        printf("%.2f - %.2f\n", density_population_a, density_population_b);
        printf("Card A = %ld\n", sum_card_a = pib_city_a + density_population_a);
        printf("Card B = %ld", sum_card_b = pib_city_b + density_population_b);
        if (sum_card_a > sum_card_b)
        {
            printf("Card A win (1)");
            printf("Carta A venceu (1)");
        }
        else
        {
            printf("Card B win (0)");
            printf("Carta B venceu (0)");
        }
    }

    if (option_comparation_one == 3 && option_comparation_two == 6)
    {
        printf("%s VS %s\n", name_city_a, name_city_b);
        printf("The attributes for comparate is PIB of city and PIB per capita\n");
        printf("%.2f - %.2f\n", pib_city_a, pib_city_b);
        printf("%.2f - %.2f\n", pib_per_capita_a, pib_per_capita_b);
        printf("Card A = %ld\n", sum_card_a = pib_city_a + pib_per_capita_a);
        printf("Card B = %ld", sum_card_b = pib_city_a + pib_per_capita_b);
        if (sum_card_a > sum_card_b)
        {
            printf("Card A win (1)");
            printf("Carta A venceu (1)");
        }
        else
        {
            printf("Card B win (0)");
            printf("Carta B venceu (0)");
        }
    }

    if (option_comparation_one == 4 && option_comparation_two == 5)
    {
        printf("%s VS %s\n", name_city_a, name_city_b);
        printf("The attributes for comparate is number point touristics and Density population\n");
        printf("%d - %d\n", number_points_touristics_a, number_points_touristics_b);
        printf("%.2f - %.2f\n", density_population_a, density_population_b);
        printf("Card A = %ld\n", sum_card_a = number_points_touristics_a + density_population_a);
        printf("Card B = %ld", sum_card_b = number_points_touristics_a + density_population_b);
        if (sum_card_a > sum_card_b)
        {
            printf("Card A win (1)");
            printf("Carta A venceu (1)");
        }
        else
        {
            printf("Card B win (0)");
            printf("Carta B venceu (0)");
        }
    }

    if (option_comparation_one == 4 && option_comparation_two == 6)
    {
        printf("%s VS %s\n", name_city_a, name_city_b);
        printf("The attributes for comparate is number point touristics and PIB per capita\n");
        printf("%d - %d\n", number_points_touristics_a, number_points_touristics_b);
        printf("%.2f - %.2f\n", pib_per_capita_a, pib_per_capita_b);
        printf("Card A = %ld\n", sum_card_a = number_points_touristics_a + pib_per_capita_a);
        printf("Card B = %ld", sum_card_b = number_points_touristics_a + pib_per_capita_b);
        if (sum_card_a > sum_card_b)
        {
            printf("Card A win (1)");
            printf("Carta A venceu (1)");
        }
        else
        {
            printf("Card B win (0)");
            printf("Carta B venceu (0)");
        }
    }

    if (option_comparation_one == 5 && option_comparation_two == 6)
    {
        printf("%s VS %s\n", name_city_a, name_city_b);
        printf("The attributes for comparate is density population and PIB per capita\n");
        printf("%d - %d\n", density_population_a, density_population_b);
        printf("%.2f - %.2f\n", pib_per_capita_a, pib_per_capita_b);
        printf("Card A = %ld\n", sum_card_a = density_population_a + pib_per_capita_a);
        printf("Card B = %ld", sum_card_b = density_population_b + pib_per_capita_b);
        if (sum_card_a > sum_card_b)
        {
            printf("Card A win (1)");
            printf("Carta A venceu (1)");
        }
        else
        {
            printf("Card B win (0)");
            printf("Carta B venceu (0)");
        }
    }

    // Section of code using loop if-else (for comparate values)
    // Comparating values of two cards
    // printf("Comparating of two cards\n");
    // if (population_city_a > population_city_b)
    // {
    //   printf("Population: \n");
    //   counter_power_card_a++;
    //   printf("Card 1 win (1)\n");
    //   printf("Carta 1 venceu (1)\n");
    // }
    // else
    // {
    //   printf("Population: \n");
    //   counter_power_card_b++;
    //   printf("Card 2 win (0)\n");
    //   printf("Carta 2 venceu (0)\n");
    // }
    // if (area_a > area_b)
    // {
    //   printf("Area: \n");
    //   counter_power_card_a++;
    //   printf("Card 1 win (1)\n");
    //   printf("Carta 1 venceu (1)\n");
    // }
    // else
    // {
    //   printf("Area: \n");
    //   counter_power_card_b++;
    //   printf("Card 2 win (0)\n");
    //   printf("Carta 2 venceu (0)\n");
    // }
    // if (pib_city_a > pib_city_b)
    // {
    //   printf("PIB: \n");
    //   counter_power_card_a++;
    //   printf("Card 1 win (1)\n");
    //   printf("Carta 1 venceu (1)\n");
    // }
    // else
    // {
    //   printf("PIB: \n");
    //   counter_power_card_b++;
    //   printf("Card 2 win (0)\n");
    //   printf("Carta 2 venceu (0)\n");
    // }
    // if (number_points_touristics_a > number_points_touristics_b)
    // {
    //   printf("Point Touristics: \n");
    //   counter_power_card_a++;
    //   printf("Card 1 win (1)\n");
    //   printf("Carta 1 venceu (1)\n");
    // }
    // else
    // {
    //   printf("Point Touristics: \n");
    //   counter_power_card_b++;
    //   printf("Card 2 win (0)\n");
    //   printf("Carta 2 venceu (0)\n");
    // }
    // if (density_population_a > density_population_b)
    // {
    //   printf("Density Population: \n");
    //   counter_power_card_b++;
    //   printf("Card 2 win (0)\n");
    //   printf("Carta 2 venceu (0)\n");
    // }
    // else
    // {
    //   printf("Density Population: \n");
    //   counter_power_card_a++;
    //   printf("Card 1 win (1)\n");
    //   printf("Carta 1 venceu (1)\n");
    // }
    // if (power_card_a > power_card_b)
    // {
    //   printf("Super power: \n");
    //   printf("Card 1 win (1)\n");
    //   printf("Carta 1 venceu (1)\n");
    // }
    // else
    // {
    //   printf("Super power: \n");
    //   printf("Card 2 win (0)\n");
    //   printf("Carta 2 venceu (0)\n");
    // }

    return 0;
}
