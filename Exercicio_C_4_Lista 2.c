/*Desenvolva Um algoritmo que receba n�meros para preencher um vetor 
 e atrav�s de retorno de uso da fun��o seja exibido em tela
  quem � o maior e quem � o menor n�mero do vetor*/
#include<stdio.h>
#define TAM 5

int verif_vetor (int *vet, int retorno)
{
	int i, maior = vet[0], menor = vet[1];
	
	for(i=0;i<TAM;i++){
		if(maior < vet[i])
		{
			maior = vet[i];
		}else{
			if(menor > vet[i])
			menor = vet[i];
		}
	}
	if (retorno == 1)
	{
		return maior;
	}else{
		return menor;
}
	
	return 0;
}

void main ()
{
	int i,vetor[TAM];
	
	printf("Digite valores para preencher o vetor: ");
	//Preenchendo o vetor
	for(i=0;i<TAM;i++)
	scanf("%d", &vetor[i]);
	
	printf("\n\t Maior valor: %d", verif_vetor(vetor,1));
	printf("\n\t Menor valor: %d", verif_vetor(vetor,0));
}
