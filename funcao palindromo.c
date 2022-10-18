/*
	FAETERJ-Rio
	FPR - Manh�			Professor Leonardo Vianna
	Data: 06/10/2022
	
	Recursividade
	
	Lista de Exerc�cios VIII
	
	Quest�o 05:
	Dada uma string s, desenvolver uma fun��o recursiva que 
	determine se s � ou n�o um pal�ndromo.
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//prot�tipos das fun��es
int palindromo (char s[]);
int palindromoRec (char s[], int inicio, int fim);

//main
void main ()
{
	int resp = palindromo ("ARARA");
	
	printf ("\nResp = %d", resp);
}

//implementa��o das fun��es
int palindromo (char s[])
{
	return palindromoRec (s, 0, strlen(s)-1);
}

int palindromoRec (char s[], int inicio, int fim)
{
	if (inicio < fim)	//caso geral
	{
		if (s[inicio] != s[fim])	//dois caracteres distintos sendo encontrados
		{
			return 0;	//n�o � pal�ndromo
		}
		else	//poderia ser omitido, pois se chegou aqui, o return 0 n�o foi executado
		{
			return palindromoRec (s, inicio+1, fim-1);
		}		
	}
	else	//poderia ser omitido, pois nenhum return foi executado
	{
		return 1;
	}
}
