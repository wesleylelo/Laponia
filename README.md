//# Laponia
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <locale.h>

int main(){
	//declaração de variaveis
	char tabuleiro[12][12] = {
		{' ', '1', '2', '3', '4', '5', '6', '7', '8', '9', '10', '11', '12'},
		{'1', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
		{'2', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*'},
		{'3', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*', '*'},
		{'4', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*', '*'},
		{'5', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*', '*'},
		{'6', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~', '*'},
		{'7', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~', '*'},
		{'8', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*'},
		{'9', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*'},
		{'10', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*'},
		{'11', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*'},
		{'12', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'}
	};
	char jogador[100], jogador1[100], jogador2[99];
	int x,i, j, turno, jogada, proxjogada, inicio, fim;
	
	//Tradução do código para o português
	setlocale(LC_ALL, "Portuguese");
	printf("Bem vindos para as BATALHAS DE LAPÔNIA!!\n");
	
	// Explicando as regras para os jogadores e a movimentação
	printf("Cada jogador terá 8 guerreiros básicos e 1 guerreiro especial!\n");
	printf("Os guerreiros básicos serão marcados pelos números 1 e 2, já os especiais pelos caracteres @(para o jogador 1) e #(para o jogador 2)!\n");
	printf("Guerreiros se movimentam somente uma casa por jogada e sempre na horizontal ou vertical, nunca na diagonal!\n");
	
	//sorteio para ver quem vai iniciar o jogo
	do{
		printf("Jogador (Insira seu apelido):\n");
		scanf("%s", jogador);
		i++;
		system("cls");
	}while(i<2);{
		printf("O sorteado para começar o jogo é %s\n", jogador);
	}
	if(jogador1[1] == inicio){
		jogador2[2] == proxjogada;
	}else{
		jogador2[2] == inicio;
	}
	
	//Registro dos jogadores
	printf("Querido usário, digite os nomes dos jogadores 1 e 2, por favor.\n");
	
	printf("Jogador 1: ");
	scanf("%s", jogador1);
	
	printf("Jogador 2: ");
	scanf("%s", jogador2);
	
	//Exibe o tabuleiro
	
	printf("Esse é o nosso tabuleiro!\n");
	
	for(i = 0; i<12; i++){
		for(j = 0; j < 12; j++){
			printf("%c", tabuleiro[i][j]);
		}
		printf("\n");
	}
	
	printf("Vamos começar!\n");
	
	for(x=0; x < 8; x++){
		printf("Jogador 1, escolha uma linha e coluna válida para colocar sua primeira peça(De [0][0] até [11][4])\n");
		scanf("%d %d", &i, &j);
	
		if((i > 0 && j > 0 && j < 5 && i < 11) && tabuleiro[i][j] == '.'){
			scanf("%c", &tabuleiro[i][j]);
		}else{
			printf("Você escolheu um espaço inválido, tente novamente!\n");
			x -=x;
		}
	}
	
	for(x=0; x < 8; x++){
		printf("Jogador 2, escolha uma linha e coluna válida para colocar sua primeira peça(De [0][7] até [11][11])\n");
		scanf("%d %d", &i, &j);
		if((i > 0 && j > 6 && j < 11 && i < 11) && tabuleiro[i][j] == '.'){
			scanf("%c", &tabuleiro[i][j]);
		}else{
			printf("Você escolheu um espaço inválido, tente novamente!\n");
			x -= x;
		}	
	}
	
	return 0;
}
