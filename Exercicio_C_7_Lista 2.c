/* Desenvolva um algoritmo em C que quando o usu�rio informar sua idade, seu nome e seu n� de titulo em tela, 
se sua idade for maior que 18 e tem idade abaixo de 70 anos, informe mensagem que o usu�rio � obrigat�rio vota��o, 
e SE o usu�rio informar idade menor que for igual a 16 e maior que 70, informe em tela que o voto � facultativo.*/
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
