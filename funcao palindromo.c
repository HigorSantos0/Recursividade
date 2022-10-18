/*
	FAETERJ-Rio
	FPR - Manhã			Professor Leonardo Vianna
	Data: 06/10/2022
	
	Recursividade
	
	Lista de Exercícios VIII
	
	Questão 05:
	Dada uma string s, desenvolver uma função recursiva que 
	determine se s é ou não um palíndromo.
*/

//importação de bibliotecas
#include <stdio.h>
#include <string.h>

//protótipos das funções
int palindromo (char s[]);
int palindromoRec (char s[], int inicio, int fim);

//main
void main ()
{
	int resp = palindromo ("ARARA");
	
	printf ("\nResp = %d", resp);
}

//implementação das funções
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
			return 0;	//não é palíndromo
		}
		else	//poderia ser omitido, pois se chegou aqui, o return 0 não foi executado
		{
			return palindromoRec (s, inicio+1, fim-1);
		}		
	}
	else	//poderia ser omitido, pois nenhum return foi executado
	{
		return 1;
	}
}
