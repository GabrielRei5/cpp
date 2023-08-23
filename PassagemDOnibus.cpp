/* Ca estava eu fazendo o programa até q então percebi que iria ficar gigante,
pois eu decidi de fazer de uma forma diferente.
Por esse motivo fiz a escolha de simplifcar do meio até o fim :)*/

// Tem Varios Bugs

#include <stdio.h>
#include <iostream>

enum cidades_dispo { Ourinhos = 27, SaoPaulo, MinasGerais, Curitiba };

typedef struct {
  char nome[40];
  char rg[18];
  int opcao;
}Passageiro;

typedef struct {
  char cidadeOnome[30];
  char cidadeDnome[30];
  int cidadeO;
  int cidadeD;
} Cidades;
typedef struct {
  Cidades city;
  int idaVolta;
  char dataIda[8];
  char dataVolta[8];
} Busca;

int retornaCity(char *cidade);
int lenStr(char *nome);

int main() {
  int op;
  float preco = 134.94;
  Busca buscar;
  Passageiro p1;

  printf(" _______________________________________\n");
  printf("|                                       |\n");
  printf("|                                       |\n");
  printf("|     COMPRE SUA PASSAGEM DE ONIBUS     |\n");
  printf("|                                       |\n");
  printf("|_______________________________________|\n");

  printf(" _______________________________________\n");
  printf("|          CIDADES DISPONIVEIS          |\n");
  printf("|                                       |\n");
  printf("|    Ourinhos - Sao Paulo - Curitiba    |\n");
  printf("|    Minas Gerais                       |\n");
  printf("|_______________________________________|\n\n");



  do {
    printf("Digite o nome da cidade de Origem: ");
    fgets(buscar.city.cidadeOnome, 30, stdin);

    buscar.city.cidadeO = retornaCity(buscar.city.cidadeOnome);

    // printf("%d\n", city.cidadeO);

    switch (buscar.city.cidadeO) {
    case Ourinhos:
      do {
        printf("Digite o nome da cidade de Destino: ");
        fgets(buscar.city.cidadeDnome, 30, stdin);

        buscar.city.cidadeD = retornaCity(buscar.city.cidadeDnome);

        switch (buscar.city.cidadeD) {
        case SaoPaulo:
          printf("0 - Somente ida, 1 - Ida e volta.\n");
          printf("Escolha uma opção: ");
          scanf("%d", &buscar.idaVolta);
          /*if (buscar.idaVolta == 0) 
          {
            printf("Digite a data de ida: ");
            fgets(buscar.dataIda, 8, stdin);
          } else if (buscar.idaVolta == 1) 
          {
            printf("Digite a data de ida: ");
            fgets(buscar.dataVolta, 8, stdin);
            printf("Digite a data de volta: ");
          } else 
          {
            printf("Opção invalida!!\n");
          }*/
              if(buscar.idaVolta == 1)
                 printf("Nao implementado!!");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   07:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       1      \n", preco);
  printf("                                                                                         \n");
  printf("                   13:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   10:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       2      \n", preco);
  printf("                                                                                         \n");
  printf("                   16:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   14:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       3      \n", preco);
  printf("                                                                                         \n");
  printf("                   20:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

          printf("Escolha uma opcao: ");
          scanf("%d", &p1.opcao);
          getchar();
          printf("Digite o seu nome: ");
          fgets(p1.nome, 40, stdin);
          printf("Digite o RG: ");
          fgets(p1.rg, 18, stdin);

          printf("Compra da passagem finalizada\n");

          break;
        case Curitiba:
          printf("0 - Somente ida, 1 - Ida e volta.\n");
          printf("Escolha uma opção: ");
          scanf("%d", &buscar.idaVolta);
          /*if (buscar.idaVolta == 0) 
          {
            printf("Digite a data de ida: ");
            fgets(buscar.dataIda, 8, stdin);
          } else if (buscar.idaVolta == 1) 
          {
            printf("Digite a data de ida: ");
            fgets(buscar.dataVolta, 8, stdin);
            printf("Digite a data de volta: ");
          } else 
          {
            printf("Opção invalida!!\n");
          }*/
              if(buscar.idaVolta == 1)
                 printf("Nao implementado!!");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   07:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       1      \n", preco);
  printf("                                                                                         \n");
  printf("                   13:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   10:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       2      \n", preco);
  printf("                                                                                         \n");
  printf("                   16:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   14:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       3      \n", preco);
  printf("                                                                                         \n");
  printf("                   20:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");
          printf("Escolha uma opcao: ");
          scanf("%d", &p1.opcao);
          getchar();
          printf("Digite o seu nome: ");
          fgets(p1.nome, 40, stdin);
          printf("Digite o RG: ");
          fgets(p1.rg, 18, stdin);

          printf("Compra da passagem finalizada\n");

          
          break;
        case MinasGerais:
          printf("0 - Somente ida, 1 - Ida e volta.\n");
          printf("Escolha uma opção: ");
          scanf("%d", &buscar.idaVolta);
          /*if (buscar.idaVolta == 0) 
          {
            printf("Digite a data de ida: ");
            fgets(buscar.dataIda, 8, stdin);
          } else if (buscar.idaVolta == 1) 
          {
            printf("Digite a data de ida: ");
            fgets(buscar.dataVolta, 8, stdin);
            printf("Digite a data de volta: ");
          } else 
          {
            printf("Opção invalida!!\n");
          }*/
              if(buscar.idaVolta == 1)
                 printf("Nao implementado!!");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   07:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       1      \n", preco);
  printf("                                                                                         \n");
  printf("                   13:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   10:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       2      \n", preco);
  printf("                                                                                         \n");
  printf("                   16:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   14:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       3      \n", preco);
  printf("                                                                                         \n");
  printf("                   20:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

    
          printf("Escolha uma opcao: ");
          scanf("%d", &p1.opcao);
          getchar();
          printf("Digite o seu nome: ");
          fgets(p1.nome, 40, stdin);
          printf("Digite o RG: ");
          fgets(p1.rg, 18, stdin);

          printf("Compra da passagem finalizada\n");
          break;
        default:
          printf("\nInvalido!! Digite corretamente.\n\n");
        }

      } while (buscar.city.cidadeD == 0 ||
               buscar.city.cidadeD == buscar.city.cidadeO);

      break;
    case SaoPaulo:
      do {
        printf("Digite o nome da cidade de Destino: ");
        fgets(buscar.city.cidadeDnome, 30, stdin);

        buscar.city.cidadeD = retornaCity(buscar.city.cidadeDnome);

        switch (buscar.city.cidadeD) {
        case Ourinhos:
                 printf("0 - Somente ida, 1 - Ida e volta.\n");
          printf("Escolha uma opção: ");
          scanf("%d", &buscar.idaVolta);
          /*if (buscar.idaVolta == 0) 
          {
            printf("Digite a data de ida: ");
            fgets(buscar.dataIda, 8, stdin);
          } else if (buscar.idaVolta == 1) 
          {
            printf("Digite a data de ida: ");
            fgets(buscar.dataVolta, 8, stdin);
            printf("Digite a data de volta: ");
          } else 
          {
            printf("Opção invalida!!\n");
          }*/
              if(buscar.idaVolta == 1)
                printf("Nao implementado!!");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   07:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       1      \n", preco);
  printf("                                                                                         \n");
  printf("                   13:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   10:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       2      \n", preco);
  printf("                                                                                         \n");
  printf("                   16:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   14:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       3      \n", preco);
  printf("                                                                                         \n");
  printf("                   20:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");


          printf("Escolha uma opcao: ");
          scanf("%d", &p1.opcao);
          getchar();
          printf("Digite o seu nome: ");
          fgets(p1.nome, 40, stdin);
          printf("Digite o RG: ");
          fgets(p1.rg, 18, stdin);

          printf("Compra da passagem finalizada\n");
          break;
        case Curitiba:
          printf("0 - Somente ida, 1 - Ida e volta.\n");
          printf("Escolha uma opção: ");
          scanf("%d", &buscar.idaVolta);
          /*if (buscar.idaVolta == 0) 
          {
            printf("Digite a data de ida: ");
            fgets(buscar.dataIda, 8, stdin);
          } else if (buscar.idaVolta == 1) 
          {
            printf("Digite a data de ida: ");
            fgets(buscar.dataVolta, 8, stdin);
            printf("Digite a data de volta: ");
          } else 
          {
            printf("Opção invalida!!\n");
          }*/
              if(buscar.idaVolta == 1)
                printf("Nao implementado!!");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   07:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       1      \n", preco);
  printf("                                                                                         \n");
  printf("                   13:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   10:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       2      \n", preco);
  printf("                                                                                         \n");
  printf("                   16:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   14:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       3      \n", preco);
  printf("                                                                                         \n");
  printf("                   20:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");


          printf("Escolha uma opcao: ");
          scanf("%d", &p1.opcao);
          getchar();
          printf("Digite o seu nome: ");
          fgets(p1.nome, 40, stdin);
          printf("Digite o RG: ");
          fgets(p1.rg, 18, stdin);

          printf("Compra da passagem finalizada\n");
          break;
        case MinasGerais:
          printf("0 - Somente ida, 1 - Ida e volta.\n");
          printf("Escolha uma opção: ");
          scanf("%d", &buscar.idaVolta);
          /*if (buscar.idaVolta == 0) 
          {
            printf("Digite a data de ida: ");
            fgets(buscar.dataIda, 8, stdin);
          } else if (buscar.idaVolta == 1) 
          {
            printf("Digite a data de ida: ");
            fgets(buscar.dataVolta, 8, stdin);
            printf("Digite a data de volta: ");
          } else 
          {
            printf("Opção invalida!!\n");
          }*/
              if(buscar.idaVolta == 1)
                printf("Nao implementado!!");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   07:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       1      \n", preco);
  printf("                                                                                         \n");
  printf("                   13:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   10:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       2      \n", preco);
  printf("                                                                                         \n");
  printf("                   16:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   14:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       3      \n", preco);
  printf("                                                                                         \n");
  printf("                   20:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

    
          printf("Escolha uma opcao: ");
          scanf("%d", &p1.opcao);
          getchar();
          printf("Digite o seu nome: ");
          fgets(p1.nome, 40, stdin);
          printf("Digite o RG: ");
          fgets(p1.rg, 18, stdin);

          printf("Compra da passagem finalizada\n");
          break;
        default:
          printf("\nInvalido!! Digite corretamente.\n\n");
        }

      } while (buscar.city.cidadeD == 0 ||
               buscar.city.cidadeD == buscar.city.cidadeO);
      break;
    case Curitiba:
      do {
        printf("Digite o nome da cidade de Destino: ");
        fgets(buscar.city.cidadeDnome, 30, stdin);

        buscar.city.cidadeD = retornaCity(buscar.city.cidadeDnome);

        switch (buscar.city.cidadeD) {
        case Ourinhos:
          printf("0 - Somente ida, 1 - Ida e volta.\n");
          printf("Escolha uma opção: ");
          scanf("%d", &buscar.idaVolta);
          /*if (buscar.idaVolta == 0) 
          {
            printf("Digite a data de ida: ");
            fgets(buscar.dataIda, 8, stdin);
          } else if (buscar.idaVolta == 1) 
          {
            printf("Digite a data de ida: ");
            fgets(buscar.dataVolta, 8, stdin);
            printf("Digite a data de volta: ");
          } else 
          {
            printf("Opção invalida!!\n");
          }*/
              if(buscar.idaVolta == 1)
                printf("Nao implementado!!");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   07:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       1      \n", preco);
  printf("                                                                                         \n");
  printf("                   13:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   10:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       2      \n", preco);
  printf("                                                                                         \n");
  printf("                   16:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   14:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       3      \n", preco);
  printf("                                                                                         \n");
  printf("                   20:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

    
          printf("Escolha uma opcao: ");
          scanf("%d", &p1.opcao);
          getchar();
          printf("Digite o seu nome: ");
          fgets(p1.nome, 40, stdin);
          printf("Digite o RG: ");
          fgets(p1.rg, 18, stdin);

          printf("Compra da passagem finalizada\n");
          break;
        case SaoPaulo:
          printf("0 - Somente ida, 1 - Ida e volta.\n");
          printf("Escolha uma opção: ");
          scanf("%d", &buscar.idaVolta);
          /*if (buscar.idaVolta == 0) 
          {
            printf("Digite a data de ida: ");
            fgets(buscar.dataIda, 8, stdin);
          } else if (buscar.idaVolta == 1) 
          {
            printf("Digite a data de ida: ");
            fgets(buscar.dataVolta, 8, stdin);
            printf("Digite a data de volta: ");
          } else 
          {
            printf("Opção invalida!!\n");
          }*/
              if(buscar.idaVolta == 1)
                printf("Nao implementado!!");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   07:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       1      \n", preco);
  printf("                                                                                         \n");
  printf("                   13:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   10:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       2      \n", preco);
  printf("                                                                                         \n");
  printf("                   16:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   14:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       3      \n", preco);
  printf("                                                                                         \n");
  printf("                   20:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

    
          printf("Escolha uma opcao: ");
          scanf("%d", &p1.opcao);
          getchar();
          printf("Digite o seu nome: ");
          fgets(p1.nome, 40, stdin);
          printf("Digite o RG: ");
          fgets(p1.rg, 18, stdin);

          printf("Compra da passagem finalizada\n");
          break;
        case MinasGerais:
             printf("0 - Somente ida, 1 - Ida e volta.\n");
          printf("Escolha uma opção: ");
          scanf("%d", &buscar.idaVolta);
          /*if (buscar.idaVolta == 0) 
          {
            printf("Digite a data de ida: ");
            fgets(buscar.dataIda, 8, stdin);
          } else if (buscar.idaVolta == 1) 
          {
            printf("Digite a data de ida: ");
            fgets(buscar.dataVolta, 8, stdin);
            printf("Digite a data de volta: ");
          } else 
          {
            printf("Opção invalida!!\n");
          }*/
              if(buscar.idaVolta == 1)
                printf("Nao implementado!!");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   07:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       1      \n", preco);
  printf("                                                                                         \n");
  printf("                   13:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   10:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       2      \n", preco);
  printf("                                                                                         \n");
  printf("                   16:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   14:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       3      \n", preco);
  printf("                                                                                         \n");
  printf("                   20:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

    
          printf("Escolha uma opcao: ");
          scanf("%d", &p1.opcao);
          getchar();
          printf("Digite o seu nome: ");
          fgets(p1.nome, 40, stdin);
          printf("Digite o RG: ");
          fgets(p1.rg, 18, stdin);

          printf("Compra da passagem finalizada\n");
          break;
        default:
          printf("\nInvalido!! Digite corretamente.\n\n");
        }

      } while (buscar.city.cidadeD == 0 ||
               buscar.city.cidadeD == buscar.city.cidadeO);
      
      break;
    case MinasGerais:
      do {
        printf("Digite o nome da cidade de Destino: ");
        fgets(buscar.city.cidadeDnome, 30, stdin);

        buscar.city.cidadeD = retornaCity(buscar.city.cidadeDnome);

        switch (buscar.city.cidadeD) {
        case SaoPaulo:
          printf("0 - Somente ida, 1 - Ida e volta.\n");
          printf("Escolha uma opção: ");
          scanf("%d", &buscar.idaVolta);
          /*if (buscar.idaVolta == 0) 
          {
            printf("Digite a data de ida: ");
            fgets(buscar.dataIda, 8, stdin);
          } else if (buscar.idaVolta == 1) 
          {
            printf("Digite a data de ida: ");
            fgets(buscar.dataVolta, 8, stdin);
            printf("Digite a data de volta: ");
          } else 
          {
            printf("Opção invalida!!\n");
          }*/
              if(buscar.idaVolta == 1)
                printf("Nao implementado!!");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   07:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       1      \n", preco);
  printf("                                                                                         \n");
  printf("                   13:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   10:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       2      \n", preco);
  printf("                                                                                         \n");
  printf("                   16:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   14:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       3      \n", preco);
  printf("                                                                                         \n");
  printf("                   20:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

    
          printf("Escolha uma opcao: ");
          scanf("%d", &p1.opcao);
          getchar();
          printf("Digite o seu nome: ");
          fgets(p1.nome, 40, stdin);
          printf("Digite o RG: ");
          fgets(p1.rg, 18, stdin);

          printf("Compra da passagem finalizada\n");
          break;
        case Curitiba:
          printf("0 - Somente ida, 1 - Ida e volta.\n");
          printf("Escolha uma opção: ");
          scanf("%d", &buscar.idaVolta);
          /*if (buscar.idaVolta == 0) 
          {
            printf("Digite a data de ida: ");
            fgets(buscar.dataIda, 8, stdin);
          } else if (buscar.idaVolta == 1) 
          {
            printf("Digite a data de ida: ");
            fgets(buscar.dataVolta, 8, stdin);
            printf("Digite a data de volta: ");
          } else 
          {
            printf("Opção invalida!!\n");
          }*/
              if(buscar.idaVolta == 1)
                printf("Nao implementado!!");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   07:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       1      \n", preco);
  printf("                                                                                         \n");
  printf("                   13:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   10:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       2      \n", preco);
  printf("                                                                                         \n");
  printf("                   16:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   14:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       3      \n", preco);
  printf("                                                                                         \n");
  printf("                   20:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

    
          printf("Escolha uma opcao: ");
          scanf("%d", &p1.opcao);
          getchar();
          printf("Digite o seu nome: ");
          fgets(p1.nome, 40, stdin);
          printf("Digite o RG: ");
          fgets(p1.rg, 18, stdin);

          printf("Compra da passagem finalizada\n");
          break;
        case Ourinhos:
          printf("0 - Somente ida, 1 - Ida e volta.\n");
          printf("Escolha uma opção: ");
          scanf("%d", &buscar.idaVolta);
          /*if (buscar.idaVolta == 0) 
          {
            printf("Digite a data de ida: ");
            fgets(buscar.dataIda, 8, stdin);
          } else if (buscar.idaVolta == 1) 
          {
            printf("Digite a data de ida: ");
            fgets(buscar.dataVolta, 8, stdin);
            printf("Digite a data de volta: ");
          } else 
          {
            printf("Opção invalida!!\n");
          }*/
              if(buscar.idaVolta == 1)
                printf("Nao implementado!!");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   07:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       1      \n", preco);
  printf("                                                                                         \n");
  printf("                   13:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   10:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       2      \n", preco);
  printf("                                                                                         \n");
  printf("                   16:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

  printf(" _______________________________________________________________________________________\n");
  printf("                                                                                         \n");
  printf("                                                                                         \n");
  printf("    COMPANHIA      SAÍDA      EMBARQUE/DESEMBARQUE      DURAÇÃO      PREÇO      OPÇÃO    \n");
  printf("                                                                                         \n");
  printf("                   14:00      %s                                                         \n", buscar.city.cidadeOnome);
  printf("    PRINCESA                                            6h 0m        R$%.2f       3      \n", preco);
  printf("                                                                                         \n");
  printf("                   20:00      %s                                                         \n", buscar.city.cidadeDnome);
  printf(" _______________________________________________________________________________________\n\n");

    
          printf("Escolha uma opcao: ");
          scanf("%d", &p1.opcao);
          getchar();
          printf("Digite o seu nome: ");
          fgets(p1.nome, 40, stdin);
          printf("Digite o RG: ");
          fgets(p1.rg, 18, stdin);

          printf("Compra da passagem finalizada\n");
          break;
        default:
          printf("\nInvalido!! Digite corretamente.\n\n");
        }

      } while (buscar.city.cidadeD == 0 ||
               buscar.city.cidadeD == buscar.city.cidadeO);
      break;
    default:
      printf("\nInvalido!! Digite corretamente.\n\n");
    }
  } while (buscar.city.cidadeO == 0);
}

int retornaCity(char *nome) {
  int equals = 0, r = 0;
  char cities[12][15] = {"Ourinhos",     "ourinhos",     "Sao Paulo",
                         "SP",           "sao paulo",    "sp",
                         "Minas Gerais", "minas gerais", "mg",
                         "MG",           "Curitiba",     "curitiba"};

  for (int i = 0; i < lenStr(nome); i++) {
    if (nome[i] == cities[0][i]) {
      equals++;
      if (equals == lenStr(cities[0]))
        r = 27;
    } else if (nome[i] == cities[1][i]) {
      equals++;
      if (equals == lenStr(cities[1]))
        r = 27;
    } else if (nome[i] == cities[2][i]) {
      equals++;
      if (equals == lenStr(cities[2]))
        r = 28;
    } else if (nome[i] == cities[3][i]) {
      equals++;
      if (equals == lenStr(cities[3]))
        r = 28;
    } else if (nome[i] == cities[4][i]) {
      equals++;
      if (equals == lenStr(cities[4]))
        r = 28;
    } else if (nome[i] == cities[5][i]) {
      equals++;
      if (equals == lenStr(cities[5]))
        r = 28;
    } else if (nome[i] == cities[6][i]) {
      equals++;
      if (equals == lenStr(cities[6]))
        r = 29;
    } else if (nome[i] == cities[7][i]) {
      equals++;
      if (equals == lenStr(cities[7]))
        r = 29;
    } else if (nome[i] == cities[8][i]) {
      equals++;
      if (equals == lenStr(cities[8]))
        r = 29;
    } else if (nome[i] == cities[9][i]) {
      equals++;
      if (equals == lenStr(cities[9]))
        r = 29;
    } else if (nome[i] == cities[10][i]) {
      equals++;
      if (equals == lenStr(cities[10]))
        r = 30;
    } else if (nome[i] == cities[11][i]) {
      equals++;
      if (equals == lenStr(cities[11]))
        r = 30;
    }
  }
  return r;
}

int lenStr(char *nome) {
  int i;
  for (i = 0; nome[i] != '\0'; i++)
    ;

  return i;
}
