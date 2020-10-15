/*
preencher uma matriz quadrada de ordem "N" com n�meros
aleat�rios inteiros na faixa de 0 a 9, ap�s isso,
a.)Somar todos os n�meros da matriz
b.)Somar os n�meros da diagonal principal
c.)Somar os n�meros da diagonal secund�ria
d.)Somar os n�meros que est�o acima da diagonal principal
e.)Somar os n�meros que est�o abaixo da diagonal principal.
f.)Somar os n�meros que est�o acima da diagonal secund�ria
g.)Somar os n�meros que est�o abaixo da diagonal secund�ria.
extra: mostrar na tela o elemento central (SE EXISTIR)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include<string.h>
#include<ctype.h>

main(){
	int ord,i,j,ac=0,dp=0,ds=0,acdp=0,abdp=0,acds=0,abds=0;
	
	printf("Informe a ordem da matriz ");
	scanf("%d", &ord);
	
	int mat[ord][ord];
	srand(time(NULL));
	
	for(i=0;i<ord;i++){
		for(j=0;j<ord;j++){
			mat[i][j]=rand()%10;
		}
	}
	
	for(i=0;i<ord;i++){
		for(j=0;j<ord;j++){
			ac=ac+mat[i][j]; // soma de todos elementos da matriz
			if(i==j) // elementos da diagonal principal
				dp=dp+mat[i][j];
			if((i+j)==(ord-1)) // elementos da diagonal secundaria
				ds=ds+mat[i][j];
			if(i<j) // elementos acima da diagonal principal
				acdp=acdp+mat[i][j];
			if(i>j) // elementos abaixo da diagonal principal
				abdp=abdp+mat[i][j];
			if((i+j)<=(ord-2)) // elementos acima da diagonal secundaria
				acds=acds+mat[i][j];
			if((i+j)>=ord) // elementos abaixo da diagonal secundaria
				abds=abds+mat[i][j];
		}
	}
	
	for(i=0;i<ord;i++){
		for(j=0;j<ord;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n\n");
	}
	
	printf("A soma de todos os numeros = %d\n", ac);
	printf("A soma dos numeros da diagonal principal = %d\n", dp);
	printf("A soma dos numeros da diagonal secundaria = %d\n", ds);
	printf("A soma dos numeros acima da diagonal principal = %d\n", acdp);
	printf("A soma dos numeros abaixo da diagonal principal = %d\n", abdp);
	printf("A soma dos numeros acima da diagonal secundaria = %d\n", acds);
	printf("A soma dos numeros abaixo da diagonal secundaria = %d\n", abds);
	
	// encontra elemento central se existir
	if((ord%2)==0){
		printf("Nao existe elemento central\n");
	}else{
		printf("Central = %d\n",mat[ord/2][ord/2]);
	}
}
