/*Quest�o 04:
Desenvolver uma fun��o recursiva que, dada
uma string, exiba-a invertida.
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
	//caso base impl�cito: i < 0	
}
