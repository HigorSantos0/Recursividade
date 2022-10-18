/*
	FAETERJ-Rio
	FPR - Professor Leonardo Vianna
	
	Lista de Exerc�cios IX
	
	Quest�o 06:
	Implementar uma fun��o recursiva que, dados uma string str e um caracter ch, 
	remova de str todas as ocorr�ncias de ch, retornando o total de remo��es realizadas.
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//prot�tipos das fun��es
int removerCaracteres (char s[], char ch);
int removerCaracteresAux (char s[], char ch, int pos);
void deslocarCaracteres (char s[], int pos);

//main
void main ()
{
	//declara��o de vari�veis
	char str[20];
	int quant;
	
	//inicializando a string
	strcpy (str, "OOALGOOOOORITMOSO");
	
	//chamando a fun��o
	quant = removerCaracteres (str, 'O');
	
	//exibindo a string ap�s a remo��o
	printf ("String apos a remocao: %s\nQuantidade de remocoes: %d", str, quant);
}

//implementa��o das fun��es
int removerCaracteres (char s[], char ch)
{
	return removerCaracteresAux (s, ch, 0);
}

int removerCaracteresAux (char s[], char ch, int pos)
{
	if (s[pos])	//ainda h� caracteres a serem percorridos na string
	{
		//verificando se o caracter buscado foi encontrado
		if (s[pos] == ch)
		{
			//deslocar uma posi��o para a esquerda os caracteres da posi��o 'pos' em diante
			deslocarCaracteres (s, pos);
			
			//chamando a fun��o recursivamente para buscar outras ocorr�ncias do caracter a partir da posi��o 'pos'
    		return 1 + removerCaracteresAux (s, ch, pos);  //como houve deslocamento, a posi��o 'pos' precisa ser reanalisada
		}
		else
		{
			//chamando a fun��o recursivamente para buscar outras ocorr�ncias do caracter a partir da posi��o 'pos'
			return removerCaracteresAux (s, ch, pos+1);
		}		
	}
}

void deslocarCaracteres (char s[], int pos)
{
	//declara��o de vari�veis
	int i;
	
	//varrendo todas as posi��es a partir de 'pos' para efetuar o deslocamento dos caracteres
	for (i=pos; s[i]; i++)
	{
		s[i] = s[i+1];		//neste caso, n�o tinha problema fazer iterativamente, embora seja poss�vel a solu��o recursiva para o deslocamento.
	}
}
