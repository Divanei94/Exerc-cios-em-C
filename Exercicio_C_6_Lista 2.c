/*Desenvolva um algoritimo que o usuário informe dois números e que através de chamada de funções seja retornado em tela o seguinte:
	O dobro destes números / O quadrado destes números / A divisão entre os números / O resto da divisão entre os números /
	Diga se: O resultado da soma entre os números foi uma resposta positiva ou se foi uma resposta negativa */

#include<stdio.h>

int dobro (int valor)
{
	int resultado;
	
	resultado = valor*2;
	
	return resultado;
}

int quadrado (int valor)
{
	int resultado;
	
	resultado = valor * valor;
	
	return resultado; 
}

float divisao (int valor1,int valor2)
{
	float resultado;
	
	resultado = (valor1 / valor2);
	
	return resultado;
}

int resto (int valor1,int valor2)
{
	int resultado;
	
	resultado = (valor1 % valor2);
	
	return resultado;
}

int soma (int valor1, int valor2)
{
	int resultado;
	
	resultado = valor1 + valor2;
	if(resultado > 0)
	{
		return 1;
	}else{
		return 0;
	}
}

void main ()
{
	int num1, num2;
	
	printf("Digite dois numeros: \n");
	scanf("%d %d", &num1,&num2);
	
	printf("\n O dobro dos numeros %d e %d:> %d , %d", num1,num2,dobro(num1),dobro(num2));
	
	printf("\n O quadrado dos numeros %d e %d:> %d , %d", num1,num2,quadrado(num1),quadrado(num2));
	
	printf("\n A divisao dos numeros %d e %d:> %.2f", num1,num2,divisao(num1,num2));
	
	printf("\n O resto da divisao entre os numeros %d e %d:> %d", num1,num2,resto(num1,num2));
	
	if (soma(num1,num2) ==1)
	{
		printf("\n O resultado da soma dos numeros %d e %d:> %d [POSITIVO]", num1,num2,(num1+num2));
	}else{
		printf("\n O resultado da soma dos numeros %d e %d:> %d [NEGATIVO]", num1,num2,(num1+num2));
	}
}
