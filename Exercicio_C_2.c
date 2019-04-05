#include<stdio.h>

int resto (int valor1, int valor2)
{
	int resto;
	
	resto = (valor1 % valor2);
	
	return resto;
}

int main()
{
	int valor1,valor2,retorno;
	
	printf("Dois numeros inteiros para retornar o resto: ");
	scanf("%d", &valor1);
	scanf("%d", &valor2);
	
	retorno = resto(valor1,valor2);
	
	printf("Resto da divisao: %d", retorno);
}
