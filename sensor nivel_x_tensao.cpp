#include<stdio.h>
#include<conio.h>

float result, sensor;

float calc_sensor(float tensao)
{
	float nivel;
	nivel=tensao/0.083333;
	return(nivel);
}

main()
{
	while(1)
	{
		printf("\n SENSOR VALUE = ");
		scanf("%f", &sensor);
		result=  calc_sensor(sensor);
		printf(" \n LEVEL VALUE (L) = %.2f", result);
	}
}
