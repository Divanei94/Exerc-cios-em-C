#include<stdio.h>

int transformacao (int valor)
{
	int hora,minuto,segundo;
	
	hora = valor/3600;
	minuto = (valor - (hora*3600))/60;
	segundo = valor - (3600*hora) - (minuto*60);
	
	printf("%d H, %d M, %d S", hora, minuto,segundo);
	
	return 0;
}

void main ()
{
	int entrada;
	
	printf("Entre com a quantidade de segundos: ");
	scanf("%d", &entrada);
	
	transformacao(entrada);
}
