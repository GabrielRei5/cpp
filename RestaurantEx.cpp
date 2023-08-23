#include <limits>
#include <cstdio>
#include <string.h>
#include <iostream>

#define Horrivel 0
#define Ruim 1
#define Razoavel 2
#define Bom 3
#define MuitoBom 4
#define Excelente 5

using namespace std;
class Restaurant
{
    public:
      char name[40];
      char address[40];
      char foodType[40];
      int eval;

    
      Restaurant()
{
        
      strcpy(name, "\0");
      strcpy(address, "\0");
      strcpy(foodType, "\0");
      int eval = 0;
    
}
    Restaurant(char *name, char *address, char *foodType, int eval)
{
      strcpy(this->name, name);
      strcpy(this->address, address);
      strcpy(this->foodType, foodType);
      this->eval = eval;
    }
  };

class Node {
public:
	Restaurant data;
	Node* next;

	Node()
	{
		data = Restaurant();
		next = NULL;
	}

	Node(char *name, char *address, char *foodType, int eval)
	{
		strcpy(this->data.name, name);
    strcpy(this->data.address, address);
    strcpy(this->data.foodType, foodType);
    this->data.eval = eval;
		this->next = NULL;
	}
};

class Linkedlist {
	Node* head;

public:
	
	Linkedlist() { head = NULL; }

	void insertNode(char *name, char *address, char *foodType, int eval)
{

	Node* newNode = new Node(name, address, foodType, eval);


	if (head == NULL) {
		head = newNode;
		return;
	}

	
	Node* temp = head;
	while (temp->next != NULL) {

		temp = temp->next;
	}

	
	temp->next = newNode;
}

	void printList()
  {
	Node* temp = head;
  int i = 0;

	if (head == NULL) {
		cout << "\n\t\x1b[5;31m--Vazio--\x1b[0m\x1b[1;32m" << endl;
		return;
	}

	
	while (temp != NULL) {
    cout << "\nRestaurante " << i << endl;
		cout << "\nNome: " << temp->data.name << endl;
    cout << "Endereco: "<< temp->data.address << endl;
    cout << "Tipo de comida: "<< temp->data.foodType << endl;
    switch(temp->data.eval)
{
    case Horrivel: 
    cout << "Nota: "<< temp->data.eval << " - Horrivel" << endl;
          break;
    case Ruim: 
    cout << "Nota: "<< temp->data.eval << " - Ruim" << endl;
          break;
    case Razoavel: 
    cout << "Nota: "<< temp->data.eval << " - Razoavel" << endl;
          break;
    case Bom: 
    cout << "Nota: "<< temp->data.eval << " - Bom" << endl;
          break;
    case MuitoBom: 
    cout << "Nota: "<< temp->data.eval << " - Muito Bom" << endl;
          break;
    case Excelente: 
    cout << "Nota: "<< temp->data.eval << " - Excelente" << endl;
          break;
}
    temp = temp->next;

    i++;
	}
}



};

//void Linkedlist::insertNode(char *name, char *address, char *foodType, int eval)


//void Linkedlist::printList()


int main()
{
	Linkedlist list;
  int eval, option;
  char c[1];
  char name[40];
  char address[40];
  char foodType[40];
  int sair = 0;

  printf("\x1b[H");
  printf("\x1b[2J");
do{

printf("\t\x1b[4;94mMinha lista de Restaurantes\x1b[0m\n\n");
printf("\x1b[5;31mEscolha uma opcao...\x1b[0m\n\n");

printf("\x1b[1;32m0 - Adicionar um Restaurante\n");
printf("1 - Mostrar a lista de Restaurantes\n");
printf("2 - Sair\n");
printf(": ");
cin >> option;
cin.ignore(numeric_limits<streamsize>::max(), '\n');
  switch (option) {
  case 0:
  do{
    cout << "Digite o nome: ";         
    cin.getline(name, 40);

    cout << "Digite o endereco: ";
    cin.getline(address, 40);

    cout << "Digite o tipo de comida: ";
    cin.getline(foodType, 40);
    
  do{
    printf("\n0 - Horrivel\n");
    printf("1 - Ruim\n");
    printf("2 - Razoavel\n");
    printf("3 - Bom\n");
    printf("4 - Muito Bom\n");
    printf("5 - Excelente\n");
    cout << "\nDigite uma nota de 0 a 5: ";
    cin >> eval;
    }while(eval > 5 || eval < 0);

	list.insertNode(name, address, foodType, eval);

	do{
    cout << "\n0 para voltar, 1 para continuar adicionando" << endl;
    cout << ": ";
    cin >> sair;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

            if(sair > 1 || sair < 0)
            {
              printf("\x1b[H");
              printf("\x1b[2J");

              printf("\n\n\x1b[31mOpcao Invalida!!\x1b[32m\n\n");
            }
    }while(sair > 1 || sair < 0);
  }while(sair != 0);
  
  printf("\x1b[H");
  printf("\x1b[2J");
  
        break;
    
    case 1:
        
        printf("\x1b[H");
        printf("\x1b[2J");
    
        cout << "\x1b[4;94m--Restaurantes adicionados--\x1b[0m\x1b[1;32m\n";

	// Print the list
	list.printList();
	cout << endl;
     
        cout << "\x1b[5;32m...Aperte ENTER para continuar...\x1b[0m\x1b[1;32m";
        cin.getline(c, 1);
          

        printf("\x1b[H");
        printf("\x1b[2J");

        break;
      case 2: 
        printf("\x1b[H");
        printf("\x1b[2J");

        printf("Ate logo...\n\n");
        break;

    default:
        printf("\x1b[H");
        printf("\x1b[2J");

        printf("\n\n\x1b[31mOpcao Invalida!!\x1b[32m\n\n");
};
  }while(option != 2);
	
  	return 0;
}

