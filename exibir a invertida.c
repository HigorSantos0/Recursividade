/*Questão 04:
Desenvolver uma função recursiva que, dada
uma string, exiba-a invertida.
*/

//importação de bibliotecas
#include <stdio.h>
#include <string.h>

//protótipos das funções
void exibirInvertida (char s[]);

void exibirInvertidaAux (char s[], int i);

//main
void main ()
{
	//chamando a função
	exibirInvertida ("ALGORITMOS");
}

//implementação das funções
void exibirInvertida (char s[])
{
	exibirInvertidaAux (s, strlen(s) - 1);
}

void exibirInvertidaAux (char s[], int i)
{
	//caso geral
	if (i >= 0)
	{
		printf ("%c", s[i]);
		
		exibirInvertidaAux (s, i-1);
	}
	//caso base implícito: i < 0	
}
