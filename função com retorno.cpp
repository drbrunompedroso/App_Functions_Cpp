#include<stdio.h>

int  maior(int x, int y)
{
	if(x>y)
	{
		return(x);
	}
	else
	{
		return(y);
	}
}

main()
{
	int a, b, resultado;
	printf("Digite o valor de a:");
	scanf("%d", &a);
	printf("Digite o valor de b:");
	scanf("%d", &b);
	resultado = maior(a, b);
	printf("Resultado = %d\n", resultado);
}


