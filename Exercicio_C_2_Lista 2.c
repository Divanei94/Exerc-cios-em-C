/*Desenvover um algoritmo que receba 2 n�meros inteiros(um positivo outro negativo)
fornecidos pelo usu�rio, e atrav�s de 3 mensagens em tela seja exibido o retorno 
de tr�s fun��es onde: a primeira retorne a informa��o do dobro destes n�meros
	a segunda exiba o resultado da multiplica��o entre estes n�meros, 
	e a terceira seja verificado e depois retornado em tela se o resultado 
	da multiplica��o retornada pela fun��o anterior ser� 
	positivo (quando o resultado > 1) ou negativo(quando o resultado < 1).*/
	
#include<stdio.h>

int dobro (int num)
{
	num = num * 2;
	
	return num;
}

int multiplicacao (int num1, int num2)
{
	int resultado;
	
	resultado = num1 * num2;
	
	return resultado;
}

int verificacao (int valor)
{
	if (valor > 0)
	{
		return 1;
	}else{
		if (valor < 0)
		{
			return 2;
		}else{
			return 0;
		}
	}
}

void main()
{
	int numero1, numero2;
	
	printf("\t Digite 2 valores, um positivo outro negativo: ");
	scanf("%d %d", &numero1, &numero2);
	
	printf("\n\t Dobro: %d  %d", dobro(numero1),dobro(numero2));
	
	printf("\n\t Multiplicacao de %d x %d = %d", numero1, numero2, multiplicacao(numero1,numero2));
	
	if (verificacao(multiplicacao(numero1,numero2)) == 1)
	{
		printf("\n\t Resultado da multiplicacao: POSITIVO");
	}else{
		if(verificacao(multiplicacao(numero1,numero2)) == 2)
		{
			printf("\n\t Resultado da multiplicacao: NEGATIVO");
		}else{
			printf("\n\t Resultado da multiplicacao: NULO");
		}
	}
		
}		
