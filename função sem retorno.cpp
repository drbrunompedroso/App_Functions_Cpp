#include<stdio.h>

void  maior(int x, int y)
{
	if(x>y)
	{
		printf("“Resultado = %d\n", x);
	}
	else
	{
		printf("Resultado = %d\n", y);
	}
}

main()
{
	int a, b;
	printf("Digite o valor de a:");
	scanf("%d", &a);
	printf("Digite o valor de b:");
	scanf("%d", &b);
	maior(a, b);
}



