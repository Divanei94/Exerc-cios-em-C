/*Desenvolva um algoritmo em que no bloco principal MAIN, demonstre através de chamadas e funções,
as mensagens em tela referente à cada operação matemática que o usuário escolher (adição, subtração etc).*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int soma (void)
{
	system("cls");
	int resultado,valor1,valor2;
	printf("\n\nDigite 2 valores para somar: ");
	scanf("%d %d", &valor1,&valor2);
	
	resultado = valor1 + valor2;

	printf("\nResultado: %d", resultado);
	getch();
	return 0;
}

int subtracao (void)
{
	system("cls");
	int resultado,valor1,valor2;
	printf("\n\nDigite 2 valores para subtrair: ");
	scanf("%d %d", &valor1,&valor2);
	
	resultado = valor1 - valor2;
	
	printf("\nResultado: %d", resultado);
	getch();
	return 0;
}

int multiplicacao (void)
{
	system("cls");
	int resultado,valor1,valor2;
	printf("\n\nDigite 2 valores para multiplicar: ");
	scanf("%d %d", &valor1,&valor2);
	
	resultado = valor1 * valor2;
	
	printf("\nResultado: %d", resultado);
	getch();
	return 0;
}

int divisao(void)
{
	system("cls");
	int resultado,valor1,valor2;
	printf("\n\nDigite 2 valores para dividir: ");
	scanf("%d %d", &valor1,&valor2);
	
	resultado = valor1 / valor2;
	
	printf("\nResultado: %d", resultado);
	getch();
	return 0;
}

int tela_inicio (void)
{
	int opcao;
	
	system("cls");
	printf("\n\nEscolha o tipo de operacao matematica: ");
	printf("\n\n[1] SOMA \n[2] SUBTRACAO \n[3] MULTIPLICACAO \n[4] DIVISAO \n[0] SAIR \n");
	scanf("%d", &opcao);
	
	switch (opcao)
	{
		case 1:
			soma();
			break;
		case 2:
			subtracao();
			break;
		case 3:
			multiplicacao();
			break;
		case 4:
			divisao();
			break;
		case 0:
			break;
		default:
			printf("\nEscolha uma opcao valida.");
			getch();
			
	}
	return 	opcao;
}

void main ()
{
	int i=1;
	
	while (i != 0)
	{
	i = tela_inicio();
	}
}
