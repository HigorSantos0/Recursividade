/*
	FAETERJ-Rio
	FPR - Professor Leonardo Vianna
	
	Lista de Exercícios IX
	
	Questão 06:
	Implementar uma função recursiva que, dados uma string str e um caracter ch, 
	remova de str todas as ocorrências de ch, retornando o total de remoções realizadas.
*/

//importação de bibliotecas
#include <stdio.h>
#include <string.h>

//protótipos das funções
int removerCaracteres (char s[], char ch);
int removerCaracteresAux (char s[], char ch, int pos);
void deslocarCaracteres (char s[], int pos);

//main
void main ()
{
	//declaração de variáveis
	char str[20];
	int quant;
	
	//inicializando a string
	strcpy (str, "OOALGOOOOORITMOSO");
	
	//chamando a função
	quant = removerCaracteres (str, 'O');
	
	//exibindo a string após a remoção
	printf ("String apos a remocao: %s\nQuantidade de remocoes: %d", str, quant);
}

//implementação das funções
int removerCaracteres (char s[], char ch)
{
	return removerCaracteresAux (s, ch, 0);
}

int removerCaracteresAux (char s[], char ch, int pos)
{
	if (s[pos])	//ainda há caracteres a serem percorridos na string
	{
		//verificando se o caracter buscado foi encontrado
		if (s[pos] == ch)
		{
			//deslocar uma posição para a esquerda os caracteres da posição 'pos' em diante
			deslocarCaracteres (s, pos);
			
			//chamando a função recursivamente para buscar outras ocorrências do caracter a partir da posição 'pos'
    		return 1 + removerCaracteresAux (s, ch, pos);  //como houve deslocamento, a posição 'pos' precisa ser reanalisada
		}
		else
		{
			//chamando a função recursivamente para buscar outras ocorrências do caracter a partir da posição 'pos'
			return removerCaracteresAux (s, ch, pos+1);
		}		
	}
}

void deslocarCaracteres (char s[], int pos)
{
	//declaração de variáveis
	int i;
	
	//varrendo todas as posições a partir de 'pos' para efetuar o deslocamento dos caracteres
	for (i=pos; s[i]; i++)
	{
		s[i] = s[i+1];		//neste caso, não tinha problema fazer iterativamente, embora seja possível a solução recursiva para o deslocamento.
	}
}
