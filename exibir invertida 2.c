/*
	FAETERJ-Rio
	FPR - Professor Leonardo Vianna (Turmas Manhã e Noite)
	Data: 15/10/2022 (aula extra)
	
	Lista de Exercícios IX
	
	Questão 04:
	Desenvolver uma função recursiva que, dada uma string, exiba-a invertida.
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
	exibirInvertidaAux (s, 0);
}

void exibirInvertidaAux (char s[], int i)
{
	//caso geral
	if (s[i])
	{
		exibirInvertidaAux (s, i+1);
		
		printf ("%c", s[i]);
		
	}
	//caso base implícito: s[i] = '\0'
}

