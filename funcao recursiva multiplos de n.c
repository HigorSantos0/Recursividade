#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Quest�o 02: Desenvolver uma fun��o recursiva
que exiba todos os m�ltiplos do n�mero N,
inferiores ou iguais ao valor V.
*/

void multiplosN(int num, int valor);

void main()
{
	int n = 4, v = 26;
	
	multiplosN(n, v);
}
void multiplosN(int num, int valor)
{
	int i = 1;
	
	
	if(valor >= 0)
	{
	
		multiplosN(num, valor-1);
		
		if(valor % num == 0)
		{
			printf("%d ", valor);
		}
		
		
	}
	
	

}

