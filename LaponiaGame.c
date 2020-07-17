#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include "Variaveis.h"
#include "Gabriel.h"
#include "Natalia.h"
#include "Wesley.h"

int main(){
	
	//Tradu��o do c�digo para o portugu�s
	setlocale(LC_ALL, "Portuguese");
	
	menujogo();
	if (acabou == 1){
		goto back;
	}
	//Registro dos jogadores
	printf("Querido usu�rio, digite os nomes dos jogadores 1 e 2, por favor.\n");
	printf("Jogador Norte: ");
	//fflush(stdin);
	scanf("%s", jogadorNorte);
	fflush(stdin);

	printf("Jogador Sul: ");
	//fflush(stdin);
	scanf("%s", jogadorSul);
	fflush(stdin);
	
    op = sortearJogador();
	while (acabou==0){
		if (op == 0 && controle == 0){
			marcadorjogadorp ();
			marcarespecial1 ();
			marcadorjogadors ();
			marcarespecial2 ();
			controle = 1;
		} else if (op == 1 && controle == 0){
			marcadorjogadors ();
			marcarespecial2 ();
			marcadorjogadorp ();
			marcarespecial1 ();
			controle = 1;
		}
		if (op == 0 && controle == 1){
			printf(" Jogador Norte: Digite 1 para movimentar ou 2 para atacar ");
			scanf("%d", &numero);
			if (numero == 1){
				movimentop();
				op = 1;
			} else if (numero == 2) {
				atacarjogadorp();
				op = 1;
			}		
		}else if (op == 1 && controle == 1){
			printf(" Jogador Sul: Digite 1 para movimentar e 2 para atacar");
			scanf("%d", &numero);
			if (numero == 1){
				movimentos();
				op = 0;
			} else if (numero == 2){
				atacarjogadors();
				op = 0;
			} 
		}
		exodianorte();
		exodiasul();
		verificaosul();
		verificaonorte();
	}
	back:
	printf("Para começar a jogar novamente, compile o programa!");
	return 0;
}

