#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int recursaoBina (int numero, int vetor[], int inicio, int fim);

void main()
{
	int vetor[15] = {3, 4, 8, 10, 11, 15, 16, 18, 19, 23, 25, 26, 28, 30, 32};
	int pos, num;
	
	printf("Entre com o numero que deseja encontrar a posicao: ");
	scanf("%d", &num);
	
	pos = recursaoBina (num, vetor, 0, 14);
	
	if(pos == -1)
	{
		printf("NUmero nao encontrado no vetor!");
	}
	else
		{
			printf("O numero %d foi encontrado na posicao %d do vetor!\n", num, pos);
		}
	
}

int recursaoBina (int numero, int vetor[], int inicio, int fim)
{
	int meio;
	
	if(inicio <= fim)
	{
	
	
		meio = (inicio + fim) / 2;
	
		if(vetor[meio] == numero)
		{
			return meio;
		}
		else
			{
				if(vetor[meio] > numero)
				{
					fim = meio-1;
				
					return recursaoBina(numero, vetor, inicio, fim);
				}
			
				
					inicio = meio+1;;
				
					return recursaoBina(numero, vetor, inicio, fim);
				
		}
	}
	else
		{
			return -1; // elemento não encontrado no vetor;
		}
}
