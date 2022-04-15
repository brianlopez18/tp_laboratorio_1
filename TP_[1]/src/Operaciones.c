#include <stdio.h>
#include <stdlib.h>


float PedirKm(char mensaje[],char mensajeError[] ) //Funcion
{
	float numeroIngresado;

	printf("%s",mensaje);
	scanf("%f",&numeroIngresado);
	while(numeroIngresado<1)
	{
		printf("%s",mensajeError);
		fflush(stdin);
		scanf("%f", &numeroIngresado);
	}

	return numeroIngresado;
}

float PedirPrecioAerolineas(char mensaje[], char mensajeError[])
{
	float numeroIngresado;

		printf("%s",mensaje);
		scanf("%f",&numeroIngresado);
		while(numeroIngresado<1)
		{
			printf("%s",mensajeError);
			fflush(stdin);
			scanf("%f", &numeroIngresado);
		}
	return numeroIngresado;
}

float PedirPrecioLatam(char mensaje[], char mensajeError[])
{
	float numeroIngresado;

		printf("%s",mensaje);
		scanf("%f",&numeroIngresado);
		while(numeroIngresado<1)
		{
			printf("%s",mensajeError);
			fflush(stdin);
			scanf("%f", &numeroIngresado);
		}

		return numeroIngresado;
}

float CalcularPrecioDebito(float precio)//el float precio es y o z
{
	float descuento;
	descuento=precio-(precio*10/100);

	return descuento; //el parametro me va a retornar el descuento en debitoY
}

float CalcularPrecioCredito(float precio)
{
	float aumento;
	aumento=precio+(precio*25/100);
	return aumento;
}

float CalcularBitcoin( float precio)
{
	float valor;
	valor=precio/4606954.55;
	return valor;
}

float CalcularUnitario(float x, float precio)
{
	float unitario;
	unitario = precio / x;
	return unitario;
}

float CalcularDiferencia(float y, float z)
{
	float diferencia;
	if(y>z)
	{
		diferencia=y-z;
	}
	else
	{
		diferencia=z-y;
	}

	return diferencia;
}

void CargaForzada(void)
{
	float x;
	float y;
	float z;
	//AEROLINEAS ARGENTINAS
	float debitoY;
	float creditoY;
	float bitcoinY;
	float unitarioY;
	//LATAM
	float debitoZ;
	float creditoZ;
	float bitcoinZ;
	float unitarioZ;

	float diferencia;

	printf("Carga forzada: \n");

	x=7090;
	y=162965;
	z=159339;

	debitoY=CalcularPrecioDebito(y);
	creditoY=CalcularPrecioCredito(y);
	bitcoinY=CalcularBitcoin(y);
	unitarioY=CalcularUnitario(x,y);

	debitoZ=CalcularPrecioDebito(z);
	creditoZ=CalcularPrecioCredito(z);
	bitcoinZ=CalcularBitcoin(z);
	unitarioZ=CalcularUnitario(x,z);

	diferencia=CalcularDiferencia (y,z);

	printf("Ingrese el precio aerolineas: \n");

	printf("Precio con tarjeta de débito: %.2f \n",debitoY);
	printf("Precio con tarjeta de crédito: %.2f \n",creditoY);
	printf("Precio pagando con bitcoin : %.11f \n",bitcoinY);
	printf("Precio unitario: %.2f \n",unitarioY);

	printf("Ingrese el precio latam: \n");

	printf("Precio con tarjeta de débito: %.2f \n",debitoZ);
	printf("Precio con tarjeta de crédito: %.2f  \n",creditoZ);
	printf("Precio pagando con bitcoin : %.11f \n",bitcoinZ);
	printf("Precio unitario: %.2f \n",unitarioZ);

	printf("La diferencia de precio es: %.2f \n",diferencia);
}
