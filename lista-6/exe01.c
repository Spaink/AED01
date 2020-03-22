#include <stdio.h>
#include <stdlib.h>
unsigned int tamanho_padrao = 100;
//######################################################################################
//Início do arquivo .h

	//Fazer o Header do Programa com o cabeçalho das funções declaradas

	int criaConjunto(C);
	int conjuntoVazio(C);
	int insereElementoConjunto(x, C);
	int excluirElementoConjunto(x, C);
	int tamanhoConjunto(C);
	int maior(x, C);
	int menor(x, C);
	int pertenceConjunto(x, C);
	int conjuntosIdenticos(C1, C2);
	int subconjunto(C1, C2);
	int complemento(C1, C2);
	int uniao(C1, C2);
	int interseccao(C1, C2);
	int diferenca(C1, C2);
	int conjuntoPartes(C);
	void mostraConjunto(C, ordem);
	int copiarConjunto(C1, C2);
	int destroiConjunto(C);

//Fim do arquivo .h
typedef struct{
	unsigned int elementos[100], tamanho;
}Conjuntos;
//######################################################################################
//Início da Main
	// Onde irá executar as funções implementadas e rodar o programa
int main(){

	return 0;
}
//Fim da Main
//######################################################################################
//Início do arquivo .c

	//Declaração implementação das funções

	int criaConjunto(C);
	int conjuntoVazio(C);
	int insereElementoConjunto(x, C);
	int excluirElementoConjunto(x, C);
	int tamanhoConjunto(C);
	int maior(x, C);
	int menor(x, C);
	int pertenceConjunto(x, C);
	int conjuntosIdenticos(C1, C2);
	int subconjunto(C1, C2);
	int complemento(C1, C2);
	int uniao(C1, C2);
	int interseccao(C1, C2);
	int diferenca(C1, C2);
	int conjuntoPartes(C);
	void mostraConjunto(C, ordem);
	int copiarConjunto(C1, C2);
	int destroiConjunto(C)

//Fim do arquivo .c