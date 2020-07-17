//Fun��es de Wesley
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void marcadorjogadorp(){
	int contnum = 3;
	back:
	while((contnum > 0)){
		system("cls");
		imprimirTabuleiro();
		printf(" %s: Digite a linha e a coluna que deseja posicionar os bonecos\n", jogadorNorte);
		scanf("%d", &linha);
		scanf("%d", &coluna);
		if ((linha >= 2 && linha <= 5) && (coluna >= 1 && coluna <= 11) && (tabuleiro[linha][coluna] == '.')){
			printf("Digite o caracter apropriado\n");
			fflush(stdin);
			scanf("%c", &tabuleiro[linha][coluna]);
			contnum = contnum - 1;
			system("cls");
			imprimirTabuleiro();
		}else {
			printf("Digitou errado\n");
			goto back;
		}
	}
}

void marcadorjogadors(){
	int contnum = 3;
	back:
	while ((contnum>0)){
		system("cls");
		imprimirTabuleiro();
		printf("%s: Digite a linha e a coluna que deseja posicionar os bonecos\n", jogadorSul);
		scanf("%d %d", &linhas, &colunas);
		if((linhas >= 8 && linhas <= 11) && (colunas >= 1 && colunas <= 11) && (tabuleiro[linhas][colunas] == '.')){
			printf("Digite o caracter apropriado\n");
			fflush(stdin);
			scanf("%c", &tabuleiro[linhas][colunas]);
			contnum = contnum - 1;
			system("cls");
			imprimirTabuleiro();
		} else {
			printf("Digitou errado\n");
			goto back;
		}
	}
}

void movimentop (){
		printf(" Digite a linha e a coluna do seu boneco\n ");
		scanf("%d %d", &linha, &coluna);
		voltar:
		printf("Digite a linha e a coluna de movimento\n");
		scanf("%d %d", &linhap, &colunap);
		if(((linhap == linha && (colunap - 1 == coluna || colunap + 1 == coluna))||(colunap == coluna && (linhap + 1 == linha || linhap - 1 == linha))) && (tabuleiro[linhap][colunap]=='.')){
			tabuleiro[linhap][colunap] = tabuleiro[linha][coluna];
			tabuleiro[linha][coluna] = '.';
			system("cls");
			imprimirTabuleiro();
		} else {
			printf("Jogada invalida\n");
			goto voltar;
		}
	} void movimentos(){
		printf(" %s Digite a linha e a coluna do seu boneco\n", jogadorSul);
		scanf("%d %d", &linhas, &colunas);
		back:
		printf("Digite a linha e a coluna de movimento\n");
		scanf("%d %d", &linhap, &colunap);
		if((linhap == linhas - 1  || linhap == linhas + 1) && (colunap == colunas - 1 || colunap == colunas + 1) && (tabuleiro[linhap][colunap]=='.')){
			tabuleiro[linhap][colunap]= tabuleiro[linhas][colunas];
			tabuleiro[linhas][colunas] = '.';
			system("cls");
			imprimirTabuleiro();
		} else {
			printf("Jogada invalida");
			goto back;
		}
	} 

/*void atacar (){
	system("cls");
	imprimir();
	if ((jogador == 0)){
		printf("Escolha o guerreiro (linha e coluna) do seu CAMPO PARA ATACAR!\n");
		scanf("%d %d", &linhas, &colunas);
		contu = 8 - linhas;
		conto = 8 - linhas;
		if (tabuleiro[linhas][colunas]=='1'){
			printf("Voce so pode atacar frontalmente, digite a linha e coluna do campo oponente\n");
			scanf("%d %d", &linha, &coluna);
			if (colunas==coluna && (linha >=8 &&linha <= 11)){
				tabuleiro[linha][coluna] = '.';
				system("cls");
				imprimirTabuleiro();
			} else{
				printf("E so frontal, arrombado! Perdeu a vez");
			}
		}else if (tabuleiro[linhas][colunas]== '2'){
			printf("Voce so pode atacar na diagonal, digite a direcao da diagonal para direita e 2 para esquerda");
			scanf("%d", &direcao);
			if (direcao == 1){
				for ( s = 0; s >= 0; s ++){
					if ((contu + colunas + s<=11)&&(contu + colunas + s <= 11)){
						if (((tabuleiro[contu + s + linhas][contu + s + colunas] == '1')||(tabuleiro[contu + s + linhas][colunas + s + contu] == '2')||
							(tabuleiro[linhas + contu + s][colunas + contu + s] == '@'))){
								tabuleiro[linhas+ contu + s][colunas + contu + s]= '.';
								system("cls");
								imprimirTabuleiro();
								break;
						}
					}
				}}else if (direcao == 2){
					for (s = 0;s>=0; s --){
						if(colunas - conto + s >= 0){
							if (((tebuleiro[linhas + conto + s][colunas - conto - s] == '1')||(tabuleiro[linhas + conto + s][colunas - conto - s] == '2')||
								(tabuleiro[linhas + conto + s][colunas - conto - s] == '@'))){
									tabuleiro[linhas + conto + s][colunas - conto - s]= '.';
									system("cls");
									imprimirTabuleiro();
									break;
							}
						}
					}
				}
			}else {
				printf("Digitou errado\n");
			}
		}
}*/

void atacarjogadorp (){
	system("cls");
	imprimirTabuleiro();
		printf("%s: Escolha o guerreiro (linha e coluna) do seu CAMPO PARA ATACAR!\n", jogadorNorte);
		scanf("%d %d", &linha, &coluna);
		contu = 8 - linha;
		conto = 8 - linha;
		if (tabuleiro[linha][coluna]=='1'){
			printf("Voce so pode atacar frontalmente, digite a linha e coluna do campo oponente\n");
			scanf("%d %d", &linhas, &colunas);
			if (colunas==coluna && (linhas >=8 &&linhas <= 11)){
				tabuleiro[linha][coluna] = '.';
				system("cls");
				imprimirTabuleiro();
			} else{
				printf("E so frontal! Perdeu a vez");
			}
		}else if (tabuleiro[linha][coluna]== '2'){
			printf("Voce so pode atacar na diagonal, digite 1 para direcao da diagonal da esquerda para direita e 2 para direita para esquerda, OBS:. considere seu lado, norte ou sul.\n");
			scanf("%d", &direcao);
			if (direcao == 1){
				for (s = 0; s >= 0; s ++){
					if (contu + coluna + s<=11){
						if (((tabuleiro[contu + s + linha][contu + s + coluna] == '1')||(tabuleiro[contu + s + linha][coluna + s + contu] == '2')||
							(tabuleiro[linha + contu + s][coluna + contu + s] == '@'))){
								tabuleiro[linha+ contu + s][coluna + contu + s]= '.';
								system("cls");
								imprimirTabuleiro();
								break;
						}
					}
				}}else if (direcao == 2){
					for (s = 0;s>=0; s--){
						if(coluna - conto - s >= 0){
							if (((tabuleiro[linha + conto + s][coluna - conto - s] == '1')||(tabuleiro[linha + conto + s][coluna - conto - s] == '2')||
								(tabuleiro[linha + conto + s][coluna - conto - s] == '@'))){
									tabuleiro[linha + conto + s][coluna - conto - s]= '.';
									system("cls");
									imprimirTabuleiro();
									break;
							}
						}
					}
				}
		}
	else {
		printf("Digitou errado\n");
	}
}

void atacarjogadors (){
	system("cls");
	imprimirTabuleiro();
	printf(" %s Escolha o guerreiro (linha e coluna) do seu CAMPO PARA ATACAR!\n", jogadorSul);
	scanf("%d %d", &linhas, &colunas);
	contu = linhas - 5;
	conto = linhas - 5;
	if (tabuleiro[linhas][colunas]=='1'){
		printf("Voce so pode atacar frontalmente, digite a linha e coluna do campo oponente\n");
		scanf("%d %d", &linha, &coluna);
		if (colunas==coluna && (linha >=2 &&linha <= 5)){
			tabuleiro[linha][coluna] = '.';
			system("cls");
			imprimirTabuleiro();
		}else{
			printf("E so frontal! Perdeu a vez");
		}
	}else if (tabuleiro[linhas][colunas]== '2'){
		printf("Voce so pode atacar na diagonal, digite 1 na direcao da diagonal esquerda para direita e 2 para direita para esquerda OBS:. Considere seu lado, sul ou norte.\n");
		scanf("%d", &direcao);
		if (direcao == 1){
			i = 0;
			for (s = 0; s >= 0; s = s + 1){
				if (contu + colunas + i<=11){
					if (((tabuleiro[contu + 2 - s][ contu + colunas + i] == '1')||(tabuleiro[contu - s + 2][colunas + contu + i] == '2')||
						(tabuleiro[contu + 2 - s][colunas + contu + i] == '@'))){
							tabuleiro[2 + contu - s][colunas + contu + i]= '.';
							system("cls");
							imprimirTabuleiro();
							break;
					}i++;
				}
				
			} 
		}else if (direcao == 2){
			i = 0;
			for (s = 0; s>=0; s++){
				if(colunas - conto - i >= 0){
					if (((tabuleiro[2 + conto - s][colunas - conto - i] == '1')||(tabuleiro[2 + conto - s][colunas - conto - i] == '2')||
						(tabuleiro[2 + conto - s][colunas - conto - i] == '@'))){
							tabuleiro[2 + conto - s][colunas - conto - i]= '.';
							system("cls");
							imprimirTabuleiro();
							break;
					}i ++;
				}
			}
			}
		else {
			printf("Digitou errado\n");
		}
		}
		}
		
int verificaosul(){
	for(linha = 8; linha >= 8 && linha<12; linha++){
		for(coluna = 1;coluna >= 1 && coluna < 12; coluna++){
			if(tabuleiro[linha][coluna] == '.'){
				cont++;
			}
		}
	} if (cont == 44){
		acabou = 1;
		printf(" Patrabéns %s\n", jogadorNorte);
		return acabou;
		
	} else {
		acabou  = 0;
		return acabou; 
	}
	printf("Parab�ns, jogador norte, voc� ganhou!\n");
}



int verificaonorte(){
	for(linha = 2 ; linha >= 2 && linha<6; linha++){
		for(coluna = 1;coluna >=1 && coluna < 12; coluna++){
			if(tabuleiro[linha][coluna] == ' '){
				cont++;
			}
		}
	} if (cont == 44){
		acabou = 1;
		printf(" Patrabéns %s\n", jogadorSul);
		return acabou;
	} else {
		acabou  = 0; 
		return acabou;
	}
	gets(jogadorSul);
	printf("Parab�ns, jogador sul, voc� ganhou!\n");
}

int exodiasul(){

for(linha = 8 ;linha>=8 && linha<12; linha++){
		for(coluna = 1;coluna >= 1 && coluna < 12; coluna++){
			if((tabuleiro[linha][coluna] == '1' && tabuleiro[linha][coluna + 1] == '@' && tabuleiro[linha][coluna + 2] == '2')
			||  (tabuleiro[linha][coluna] == '2' && tabuleiro[linha][coluna + 1] == '#' && tabuleiro[linha][coluna + 2] == '1')){
				acabou = 1;
				return acabou;
				break;
			}
		if (acabou == 1){
			printf(" Patrabéns %s\n", jogadorSul);
			break;
		}
		}
	}
}



int exodianorte(){

    for(linha = 2 ; linha >= 2 && linha<6; linha++){
		for(coluna = 1;coluna >=1 && coluna < 12; coluna++){
			if((tabuleiro[linha][coluna] == '1' && tabuleiro[linha][coluna + 1] == '@' && tabuleiro[linha][coluna + 2] == '2')
			||  (tabuleiro[linha][coluna] == '2' && tabuleiro[linha][coluna + 1] == '#' && tabuleiro[linha][coluna + 2] == '1')){
				acabou = 1;
				return acabou;
				break;
			}
		    if (acabou == 1){
				printf(" Patrabéns %s\n", jogadorNorte);
			break;
		    }
		}
	}
	}	/**/
