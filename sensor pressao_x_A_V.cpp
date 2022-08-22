#include<stdio.h>
#include<conio.h>

float result, pressao, sensor, V, A;
char unit;

float calc_sensor_V(float tensao)
{
	
	pressao=tensao/0.5;
	return(pressao);
}

float calc_sensor_A(float corrente)
{
	
	pressao= (corrente-4)/0.8;
	return(pressao);
}

void analise()
{
	if(result >= (20*0.80))
	{
		printf("\n NIVEL DE PRESSAO ALTO");
	}
	else
	{
		printf("\n NIVEL DE PRESSAO NORMAL");
	}
}

main()
{
	while(1)
	{
		printf("\n SENSOR (V) OU (A)");
		scanf("%s", &unit);
		
		switch(unit)
		{
			case 'V':
			printf("\n TENSAO: ");
			scanf("%f", &V);
			result = calc_sensor_V(V);
			printf("\n PRESSAO (BAR): %.2f", result);
			analise();
			break;
			
			case 'A':
			printf("\n CORRENTE:");
			scanf("%f", &A);
			result = calc_sensor_A(A);
			printf("\n PRESSAO (BAR): %.2f", result);
			analise();
			break;
			
			default:
			printf("\n VALOR INVALIDO");
			break;
		}
		
	}
}
