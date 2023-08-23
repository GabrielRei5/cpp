#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main() {
  int n, i, nC, nP, qtd = 0, qtd2 = 0, achou = 0, inicio, fim;

  char r1[4], r2[6];
  const char *v1[2][6] = {"Sim", "sim", "s", "Nao", "nao", "n",
                          "Menor", "menor", "m", "Maior", "maior", "M"};

  // Maquina Tenta Acertar

  inicio = 0;
  fim = 100;

  // Pensando
  printf("-----------JOGO DO ADIVINHA-----------");
  printf("\n\n______________EU COMECO______________\n\n");
  printf("Pense em um numero...\n\n");
  system("timeout /t 7 > NUL");
  

  // Gerando Randomicamente o primeiro número.

  srand(time(NULL));
  n = rand() % 100;

  // Processando.

  while ((!achou) && (inicio < fim)) 
  {

    printf("%d Eh o seu numero? Sim ou Nao.\n", n);
    std::cin >> r1;
    
    printf("\n");

    // Comparando strings.

    /*Se resposta r1 e v1 de acordo com sua posição no array forem iguais
    a função compara os 2 e se forem iguais = 0 //  Sim, sim, s.*/

    if (strcmp(r1, v1[0][0]) == 0 || strcmp(r1, v1[0][1]) == 0 ||
        strcmp(r1, v1[0][2]) == 0) 
    {
      achou = 1;
      printf("\nACERTEI!!!");
      qtd++;
    }

    // Nao, nao, n.

    else if (strcmp(r1, v1[0][3]) == 0 || strcmp(r1, v1[0][4]) == 0 ||
             strcmp(r1, v1[0][5]) == 0) 
    {

      // Entrada Maior ou menor.

      printf("O numero eh Maior ou Menor que %d?\n", n);
      std::cin >> r2;

      printf("\n");
      
      // Menor, menor, m.

      if (strcmp(r2, v1[1][0]) == 0 || strcmp(r2, v1[1][1]) == 0 ||
          strcmp(r2, v1[1][2]) == 0) 
      {
        fim = n - 1;
        qtd++;
      }

      // Maior, maior, M.
      
      else if (strcmp(r2, v1[1][3]) == 0 || strcmp(r2, v1[1][4]) == 0 ||
                 strcmp(r2, v1[1][5]) == 0) 
      {
        inicio = n + 1;
        qtd++;
      }

      // Resposta invalida.

      else
        printf("Invalido!, Digite 'Maior' ou 'Menor'.\n");
    } 
      
      // Resposta Invalida.

    else
      printf("Invalido!, Digite 'Sim' ou 'Nao'.\n");
    
    // Gerando o próximo numero entre inicio e fim.
    // Ou apenas n = (inicio + fim)/2

    if(inicio != fim)
    n = (rand()% (fim - inicio)) + inicio;
      
    else printf("Seu numero so pode ser o %d.", inicio);
    
  }

  // Usuário Tenta Acertar

  // Gerando numero
  nC = rand() % 100;

  // Adivinhar

  printf("\n\n\n___________SUA VEZ___________");
  printf("\n\nPensando em um numero...\n");
  system("timeout /t 7 > NUL");
  printf("Pensei!!\n");

  while (nC != nP) 
  {
    qtd2++;
    printf("\nAdivinhe: ");
    scanf("%d", &nP);

  	if(nP > 100 || nP < 0)
		  printf("Numero Invalido!!\n");
	
	  else if(nP < nC)
	  	printf("Maior\n");
		
  	else if(nP > nC)
		  printf("Menor\n");
	  	
    else printf("\n\nParabenss!! Voce Acertou!!\n");
         printf("------------------------------\n");
	
  }

//------------PLACAR-------------

printf("\n\nAperte ENTER para ver o Placar\n\n");
system("PAUSE > NULL");

  if(qtd < qtd2)
  {
    printf("------------------\n");
    printf("| Voce Perdeu... |\n");
    printf("------------------ \n");
    printf("\n-------------------PLACAR-------------------\n");
    printf("Voce: %d Tentativas, Computador: %d Tentativas", qtd2, qtd);
  }

  else if(qtd > qtd2)
  {
    printf("------------------\n");
    printf("| Voce Ganhou!!! |\n");
    printf("------------------ \n");
    printf("\n-------------------PLACAR-------------------\n");
    printf("Voce: %d Tentativas, Computador: %d Tentativas", qtd2, qtd);
  }

  else 
  {
    printf("---------------\n");
    printf("|   Empatou   |\n");
    printf("--------------- \n");
    printf("\n-------------------PLACAR-------------------\n");
    printf("Voce: %d Tentativas, Computador: %d Tentativas", qtd2, qtd);
  }

  // Reiniciar
  printf("\n\nPressione ENTER para Jogar Novamente\n\n");
  system("PAUSE > NULL");
  system("cls");
return main();
}
