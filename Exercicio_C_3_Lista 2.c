/*Escreva abaixo um algoritmo em que seja possível ao usuário 
escolher a dimensão de uma matriz (o usuário define a quantidade de linhas e colunas),
 e em seguida seja exibida esta matriz em tela.*/
 #include<stdio.h>
 
 void exibir (int linha, int coluna)
 {
 	int l,c;
 	
 	for(l=0;l<linha;l++){
	 	printf("\n");
 		for(c=0;c<coluna;c++)
	 	printf("\t | X |");
 	}
 }
 
 void main ()
 {
 	int linha,coluna;
 	
 	printf("Digite o tamanho da matriz.");
 	printf("\nLINHA: ");
 	scanf("%d", &linha);
 	
 	printf("\nCOLUNA: ");
 	scanf("%d", &coluna);
 	
 	int matriz[linha][coluna];
 	
 	exibir(linha,coluna);
 }
