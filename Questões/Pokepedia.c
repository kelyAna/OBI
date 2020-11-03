# include <stdio.h>
# include <stdlib.h>
# include <string.h>

# define MAX_CADASTRO 1000

typedef struct{
	char nome[20];
	int numero;
	char tipo[15];
	float altura;
	float peso;
	int geracao;
	int ativo;                   //condição que sera usada para verificar se o pokemon existe
}Pokemon;
Pokemon cadastro[MAX_CADASTRO];0

void menu();
Pokemon cadastrar();
void listar();
void pesquisar();
void excluir();
void time();
Pokemon ler_arquivo();

void Sair(){
	system("PAUSE");
}

void time(){
	char nome[20];
	listar();
	printf("----TIME A----\n");
	printf("\nDigite o 1 pokemon: ");
	fgets(nome,sizeof(nome),stdin);
	printf("\nDigite o 2 pokemon: ");
	fgets(nome,sizeof(nome),stdin);
	printf("\nDigite o 3 pokemon: ");
	fgets(nome,sizeof(nome),stdin);
	
	
}

void pesquisar(){	

	char nome[20];
	int opcao;
	int i;
	do{                                                        //Do while para pesquisar um pokemon mais de uma vez
		system("cls");
		printf("\nDigite o nome do Pokemon para pesquisar: ");
		fgets(nome,sizeof(nome),stdin);
		setbuf(stdin, NULL);
		nome[strlen(nome)- 1] = 0;
		for(i=0; i<MAX_CADASTRO; i++){                        //verificar se o nome do pokemon existe no struct
			if(strstr(cadastro[i].nome, nome)!=NULL) {        //str str verifica se duas strings são iguais e se retornar null significa que as duas strings são iguais, então exige os pokemons
				printf("Cadastrado numero: %d\n", i+1);                   
				printf("Nome: %s\n", cadastro[i].nome);
				printf("Numero: %d\n", cadastro[i].numero);
				printf("Tipo: %s\n", cadastro[i].tipo);
				printf("Altura: %0.2f\n", cadastro[i].altura);
				printf("Peso: %0.2f\n", cadastro[i].peso);
				printf("Geracao: %d", cadastro[i].geracao);
				printf("\n-------------\n");
			}
		}	
		printf("\nDigite 0 para sair ou 1 para nova pesquisa: ");
		scanf("%d", &opcao);
		getchar();                                               
	}while(opcao!=0);
}

void listar(){
	
	system("cls");
	printf("-----LISTA DE POKEMONS-----\n\n");
	int i;
	for(i=0; i < MAX_CADASTRO; i++){									
		if(cadastro[i].ativo==1){                                     //esse i+1 abaixo é para não cadastrar na posição 0 e sim começar apartir da 1 ate o MAX_CADASTRO
			printf("Cadastrado numero: %d\n", i+1);                    //cada pokemon cadastrado recebera um numero de acordo com a ordem de inscrição
			printf("Nome: %s\n", cadastro[i].nome);
			printf("Numero: %d\n", cadastro[i].numero);
			printf("Tipo: %s\n", cadastro[i].tipo);
			printf("Altura: %0.2f\n", cadastro[i].altura);
			printf("Peso: %0.2f\n", cadastro[i].peso);
			printf("Geracao: %d", cadastro[i].geracao);
			printf("\n-------------\n");
 		}
	}
	getchar();
}

Pokemon ler_arquivo(){
	FILE *file;
	file = fopen("Pokelandia.txt", "r");
	
	Pokemon aux;
	
	if(file==0){
		//return 0;
	}
	while(fscanf(file, "%d", &aux.numero)==1){
		fgets(aux.nome, sizeof(aux.nome), file);
		fscanf(file, "%d\n", &aux.numero);
		fgets(aux.tipo, sizeof(aux.tipo), file);
		fscanf(file, "%f\n", &aux.altura);
		fscanf(file, "%f\n", &aux.peso);
		fscanf(file, "%f\n", &aux.geracao);
	}	
}

Pokemon cadastrar(){
	
	FILE *file;
	file = fopen("Pokelandia.txt", "a");
	//Pokemon p[1000];
	if(file==0){
		printf("Não é possivel abrir!");
	}
	
	char nome[20];
	int numero;
	char tipo[15];
	float altura;
	float peso;
	int geracao;
	int opcao;                            //variavel para perguntar se o usuario quer continuar 
	do{

		int i;
		for(i=0; i<MAX_CADASTRO; i++){
			if(cadastro[i].ativo==0){	
		system("cls");
		printf("\tNome: ");
		fgets(nome, sizeof(nome), stdin);
		setbuf(stdin, NULL);
		nome[strlen(nome)- 1] = 0;
		printf("\tNumero: ");
		scanf("%d", &numero);
		setbuf(stdin, NULL);
		printf("\tTipo: ");
		fgets(tipo, sizeof(tipo), stdin);
		setbuf(stdin, NULL);
		tipo[strlen(tipo)- 1] = 0;
		printf("\tAltura: ");
		scanf("%f", &altura);
		setbuf(stdin, NULL);
		printf("\tPeso: ");
		scanf("%f", &peso);
		setbuf(stdin, NULL);
		printf("\tGeracao: ");
		scanf("%d", &geracao);	
		setbuf(stdin, NULL);
							// se ativo for igual a 0 ele não tera nada então vai substituir
				fprintf(file,"%s\n", strcpy(cadastro[i].nome, nome));
				fprintf(file,"%d\n", cadastro[i].numero = numero);
				fprintf(file,"%s\n", strcpy(cadastro[i].tipo, tipo));
				fprintf(file,"%0.2f\n", cadastro[i].altura = altura);
				fprintf(file,"%0.2f\n", cadastro[i].peso = peso);
				fprintf(file,"%d\n", cadastro[i].geracao = geracao);
				fprintf(file, "---------------\n");
				cadastro[i].ativo=1;                                     //break para não cadastrar o pokemon varias vezes
			  
			}
		}

		fclose(file);
		
	}while(opcao!=0);
}

void menu(){
	int opcao;
	do{
		system("cls");                           //limpar para apenas ver o menu quando abrir
		printf("\t1- Cadastrar Pokemon\n");
		printf("\t2- Listar Pokemons cadastrados\n");
		printf("\t3- Pesquisar Pokemons\n");
		printf("\t4- Excluir Pokemon\n");
		printf("\t5- Montar Time\n");
		printf("\t0- Sair\n");
		scanf("%d", &opcao);
		getchar();                                   //limpar buffer antes de começar
		switch(opcao) {                             //switch para decidir oque começar primeiro
			case 1:
				cadastrar();
			break;
			case 2:
				listar();
			break;
			case 3:
				pesquisar();
			break;
			case 4:
				excluir();
			break;
			case 5:
				time();
			break;
			case 0:
				Sair();
				break;
		}
		                     			//limpar o buffer de tudo que estiver dentro do switch
	}while(opcao!=0);
}


void excluir(){
	
	int numero_cadastrado;                                        //ele pegara o numero cadastrado de acordo com a ordem e escolhera se quer remover
	listar();
	printf("\n Digite o numero do Pokemon a ser removido: ");
	scanf("%d", &numero_cadastrado);
	--numero_cadastrado;										//vai subtrair o numero da variavel e cadastrado vai passar a valer 1.
	cadastro[numero_cadastrado].ativo=0;
	printf("\nPokemon excluido com sucesso! ");
	getchar();                                                 //para manter o programa aberto e exibir o pokemon excluido com sucesso.
}

int main() {
	menu();
	cadastro[MAX_CADASTRO]=cadastrar();
	return 0;
}
