/*
Uma casa lot�rica contratou voc� para fazer um programa 
que ir� gerar palpites para o jogo da mega sena. 
O usu�rio ir� digitar a quantidade de jogos e o programa
ir� gerar 6 n�meros aleat�rios entre 1 e 60. 
N�O SE PREOCUPE EM VERIFICAR N�MEROS REPETIDOS NESTE
MOMENTO.

INFORME A QUANTIDADE DE JOGOS : 2

45 12 3 54 7 18
23 2 34 6 12 32
*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

main () {
    int vet[6];
    int i,j,qtdJogo;

     printf("Digite quantos jogos quer gerar? \n ");
     scanf("%d",&qtdJogo);

    srand(time(NULL));

    for(i=0;i<qtdJogo;i++) 
	{
        for(j=0;j<6;j++) 
		{
            vet[j] = 1 + rand()%61;
            printf("%d ", vet[j]);
        }
        printf("\n");
    }
}
