//fun��es de Gabriel
#include <stdio.h>
#include <stdlib.h>

void menujogo(){
	int continuar=1;
	do{
    	//textcolor(10);
        printf(" ||| Jogo da Lap�nia |||\n\n");
        //textcolor(13);
        printf("  *MENU PRINCIPAL*\n\n");
        printf("1. Novo Jogo\n");
        printf("2. Instrucoes\n");
        printf("0. Sair\n");

        scanf("%d", &continuar);
        system("cls || clear");

        switch(continuar){
            case 1:
                continuarversao = 2;
                novojogo();
                break;

            case 2:
                instrucoes();
                break;

            case 0:
                acabou = 1;
                continuarversao = 0;
                sair();
                break;

            default:
            	//textcolor(12);
                printf("Por Favor, digite apenas 1,2 ou 0\n");
        }
    } while(continuarversao == 1);
}

void novojogo(){
	 imprimirTabuleiro ();
}

void instrucoes(){
	//textcolor(14);
	printf("                                                  *INSTRU��ES* \n\n");
    printf("Cada jogador ter� 8 guerreiros b�sicos e 1 guerreiro especial!\n");
	printf("Os guerreiros basicos ser�o marcados pelos n�meros 1 e 2, j� os especiais pelos caracteres @(para o jogador 1) e #(para o jogador 2)!\n");
	printf("Guerreiros se movimentam somente uma casa por jogada e sempre na horizontal ou vertical, nunca na diagonal!\n");
	printf("Guerreiros 1 atacam frontalmente, apenas ");
	printf("e os guerreiro 2 atacam na diagonal\n");
	printf("Para usar o exodia, os guerreiros devem estar marcados no tabuleiro\n");
	printf("O jogo finaliza quando s� apenas um dos lados tiverem guerreiros!\n");
}

void sair(){
	//textcolor(12);
	//if(acabou=1){}
	printf("Obrigado por jogar conosco, Volte Sempre!!!\n");
	
}
