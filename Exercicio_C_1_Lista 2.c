/*Desenvolver um algoritmo que informa ao usu�rio: VERDADEIRO numeros positivos, FALSO para numeros negativos
	e VOC� PRECISA SELECIONAR UMA DAS OP��ES para numeros nulos*/ 
#include<stdio.h>

int analisar (int valor)
{
	if (valor > 0)
	{
		printf("\n\tO valor digitado eh 'VERDADEIRO'.", valor);
	}else{
		if (valor < 0 )
		{
			printf("\n\tO valor digitado eh 'FALSO'", valor);
		}else{
			printf("\n\tVOCE PRECISA SELECIONAR UMAS DAS OPCOES");
		}
	}
	return 0;
}

void main()
{
	int entrada;
	
	printf("Digite um valor: ");
	scanf("%d", &entrada);
	
	analisar(entrada);
}
  
