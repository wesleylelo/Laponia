//variaveis de escopo global
char jogadorNorte[100], jogadorSul[100];
char jogadaN[10], jogadaS[10];
int i = 1, j, linha, linhas, linhap, coluna, colunas, colunap, s, S, N, x, y, jogadordavez, jogador, op, acabou = 0,cont = 1, numero, controle = 0, direcao, contu, conto, aux, continuar, continuarversao = 1, contnum;

char tabuleiro[13][13] = {
	{' ', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'a', 'b'},
	{'1', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
	{'2', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*'},
	{'3', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*'},
	{'4', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*'},
	{'5', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*'},
	{'6', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~', '*'},
	{'7', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~', '*'},
	{'8', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*'},
	{'9', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*'},
	{'0', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*'},
	{'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*'},
	{'b', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'}
};

//funções de Gabriel
void menujogo ();
void novojogo ();
void instrucoes ();
void sair ();

//funções de Natalia
void imprimirTabuleiro();
int sortearJogador ();
void marcarespecial1 ();
void marcarespecial2 ();

//funções de Wesley
void marcadorjogadorp ();
void marcadorjogadors ();
void movimentop ();
void movimentos ();
void atacarjogadorp ();
void atacarjogadors ();
int exodianorte();
int exodiasul();
int verificaosul();
int verificaonorte();
