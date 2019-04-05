/* Desenvolva um algoritmo em C que quando o usuário informar sua idade, seu nome e seu nº de titulo em tela, 
se sua idade for maior que 18 e tem idade abaixo de 70 anos, informe mensagem que o usuário é obrigatório votação, 
e SE o usuário informar idade menor que for igual a 16 e maior que 70, informe em tela que o voto é facultativo.*/
#include<stdio.h>

void main ()
{
	int idade;
	long int titulo;
	char nome;
	
	printf("\n Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("\n Idade: ");
	scanf("%d", &idade);
	
	printf("\n Numero do titulo: ");
	scanf("%li", &titulo);
	
	if (idade >= 18 && idade <=70)
	{
		printf("\n\t VOTACAO OBRIGATORIA.");
	}else{
		if(idade <= 15 || idade > 70)
		{
			printf("\n\t VOTO FACULTATIVO.");
		}else{
			printf("\n\t VOTO OPCIONAL.");
		}
	}
}
