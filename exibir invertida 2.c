/*
	FAETERJ-Rio
	FPR - Professor Leonardo Vianna (Turmas Manh� e Noite)
	Data: 15/10/2022 (aula extra)
	
	Lista de Exerc�cios IX
	
	Quest�o 04:
	Desenvolver uma fun��o recursiva que, dada uma string, exiba-a invertida.
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//prot�tipos das fun��es
void exibirInvertida (char s[]);

void exibirInvertidaAux (char s[], int i);

//main
void main ()
{
	//chamando a fun��o
	exibirInvertida ("ALGORITMOS");
}

//implementa��o das fun��es
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
	//caso base impl�cito: s[i] = '\0'
}

