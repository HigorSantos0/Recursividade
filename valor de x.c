#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int funcao (int A, int B);

void main()
{
	int Ab = 32, Bb = 6, x;
	
	x = funcao (Ab, Bb);
	printf("%d", x);
}
int funcao (int A, int B)
{
	printf("%d %d", A, B);
	printf("\n");
	
	if (A >= B)
	{
 		return funcao (A-B, B);
 		
 	}
 	else
 	{
 		return A;
 	}
}

