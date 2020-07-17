//fun��es de Natalia
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

void imprimirTabuleiro(){
	//Exibe tabuleiro
	for(linha = 0; linha<13; linha++){
		for(coluna = 0; coluna < 13; coluna++){
			printf("%c", tabuleiro[linha][coluna]);
		}
		printf("\n");
	}
}

//sorteio
int sortearJogador(){
	srand(time(0));
	jogador = rand() % 2;
	return jogador;
}	

//Vez de cada jogador (ex: se o jogador sorteado foi o jog norte, o prox a jogar � o jog sul)
/*void vez(char jogadorNorte, char jogadorSul){
	sortearJogador();
	do{
		if(void inicio == jogadorNorte){
			int proxjogada == jogadorSul;
		}else{
			int proxjogada == jogadorNorte;
		}
}while(void jogo == continuar);
}*/

//Marcar caracter especial 1
void marcarespecial1(){
	system("cls");
	imprimirTabuleiro();
	printf("Digite a linha e coluna para marcar o caracter '@'\n");
	scanf("%d %d", &linha, &coluna);
	if ((linha >= 2 && linha<= 5) && (coluna >= 1 && coluna <= 11)){
		tabuleiro[linha][coluna] = '@';
	}else {
		printf("Posicao invalida!\n");
	}
}

//Marcar caracter especial 2
void marcarespecial2(){
	system("cls");
	imprimirTabuleiro();
	printf("Digite a linha e coluna para marcar o caracter '#'\n");
	scanf("%d %d", &linha, &coluna);
	if ((linha >= 8 && linha <= 11) && (coluna >= 1 && coluna <= 11)){
		tabuleiro[linha][coluna] = '#';
	}else {
		printf("Posicao invalida!\n");
	}
}
