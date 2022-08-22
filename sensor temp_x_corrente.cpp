#include<stdio.h>
#include<conio.h>

float result, sensor, temp;

float calc_sensor(float corrente)
{
	temp= (corrente-4)/0.076;
	return(temp);
}

void conversao()
{
	float kel;
	kel= (temp+273.15);
	printf("\n TEMP VALUE (K) = %.2f ",kel);
}

main()
{
	while(1)
	{
		printf("\n SENSOR VALUE = ");
		scanf("%f", &sensor);
		result=  calc_sensor(sensor);
		printf("\n TEMP VALUE (C) = %.2f", result);
		conversao();
	}
}
