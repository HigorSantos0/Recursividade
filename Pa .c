/*
	FAETERJ-Rio
	FPR - Professor Leonardo Vianna
	
	Lista de Exerc�cios IX
	
	Quest�o 05:
	Desenvolver uma fun��o recursiva que, dado um vetor V com quant n�meros inteiros, 
	determine se seus elementos est�o dispostos de maneira a representar uma 
	progress�o aritm�tica.
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
int verificaPA (int vetor[], int tamanho);
int verificaPA_Aux (int vetor[], int tamanho, int posicao, int razao);

//main
void main ()
{
	//declara��o de vari�veis
	int vetor1[6] = {1,4,7,10,13,16};	//Este � uma PA
	int vetor2[6] = {1,4,7,11,14,17};	//Este n�o � uma PA
	
	//chamando a fun��o para o primeiro vetor
	if (verificaPA (vetor1, 6) == 1)
	{
		printf ("\n\nO vetor 1 representa uma PA!");
	}
	else
	{
		printf ("\n\nO vetor 1 NAO representa uma PA!");
	}
	
	//chamando a fun��o para o segundo vetor
	if (verificaPA (vetor2, 6) == 1)
	{
		printf ("\n\nO vetor 2 representa uma PA!");
	}
	else
	{
		printf ("\n\nO vetor 2 NAO representa uma PA!");
	}	
}

//implementa��o das fun��es
int verificaPA (int vetor[], int tamanho)
{
	return verificaPA_Aux (vetor, tamanho, 2, vetor[1]-vetor[0]);
}

int verificaPA_Aux (int vetor[], int tamanho, int posicao, int razao)
{
	if (posicao < tamanho)
	{
		//verificando se a raz�o se mant�m entre os elementos consecutivos
		if ((vetor[posicao] - vetor[posicao-1]) == razao)
		{
			return verificaPA_Aux (vetor, tamanho, posicao+1, razao);
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 1;
	}
}
