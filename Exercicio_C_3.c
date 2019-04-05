#include<stdio.h>

void obtencao_produto (int nume1, int nume2)
{
	int impar_soma;
	
	while (nume1 != 1){
		if (nume1 % 2 == 1)
		{
			printf("%d -.- %d <- \n", nume1,nume2);
			impar_soma += nume2; 
		}else{
			printf("%d -.- %d \n", nume1,nume2);
		}
		
		nume1 = nume1/2;
		nume2 = nume2*2;
		
		if (nume1 == 1)
		{
			printf("%d -.- %d <-", nume1,nume2);
			impar_soma += nume2;
		}
	}
	
	printf("\n\n Total obtido pela soma dos impares: %d", impar_soma);
}

int main (){
	int num1, num2;
	
	printf("Entre com 2 numeros: ");
	scanf("%d", &num1);
	scanf("%d", &num2);
	
	obtencao_produto(num1,num2);
	return 0;
}
