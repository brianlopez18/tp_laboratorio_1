/*
	 Una agencia de viaje necesita calcular costos para sus vuelos de Latam y Aerolíneas Argentinas
	para ofrecerlos a sus clientes.
	Se deberá ingresar por cada vuelo los km totales y el precio total del mismo.
	El objetivo de la aplicación es mostrar las diferentes opciones de pagos a sus clientes.
	Para ello el programa iniciará y contará con un menú de opciones:
	1. Ingresar Kilómetros: ( km=x)
	2. Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z)
	- Precio vuelo Aerolíneas:
	- Precio vuelo Latam:
	3. Calcular todos los costos:
	a) Tarjeta de débito (descuento 10%)
	b) Tarjeta de crédito (interés 25%)
	c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
	d) Mostrar precio por km (precio unitario)
	e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)
	4. Informar Resultados
	“Latam:
	a) Precio con tarjeta de débito: r
	b) Precio con tarjeta de crédito: r
	c) Precio pagando con bitcoin : r
	d) Precio unitario: r
	Aerolíneas:
	a) Precio con tarjeta de débito: r
	b) Precio con tarjeta de crédito: r
	c) Precio pagando con bitcoin : r
	d) Precio unitario: r
	La diferencia de precio es : r “
	5. Carga forzada de datos
	6. Salir

 */
//	Brian Lopez 1°c
// Trabajo Practico n°1

#include <stdio.h>
#include <stdlib.h>

#include "Funciones.h" //Relacione las biblioteca para las funciones

int main(void)
{
	setbuf(stdout, NULL);//Sirve para imponer un acoplamiento por líneas a un flujo
	int opcion; //OPCIONES DEL MENU
	//iNICIALICE VARIABLES.
	float x=0; //Kilometros
	float y=0;//Aerolineas
	float z=0;//Latam
	//AEROLINEAS
	float debitoY=0; //Tarjeta de débito
	float creditoY=0; //Tarjeta de crédito
	float bitcoinY=0; //Bitcoin a peso
	float unitarioY=0; //Precio unitario
	//LATAM
	float debitoZ=0;//Tarjeta de débito
	float creditoZ=0;//Tarjeta de crédito
	float bitcoinZ=0;//Bitcoin a peso
	float unitarioZ=0;//Precio unitario
	//DIFERENCIA DE AEROLINEAS Y LATAM.
	float diferencia=0;//diferencia de precio ingresada (Latam - Aerolíneas)

	//Para crear el menu, utilice do-while, asi me permitia ejecutar de manera repetitiva un bloque de instrucciones.
	do
	{
		printf("Ingrese una de las opciones siguientes: \n"); //Empece a poner los mensajes del main, con opciones del 1 al 6.
		printf("1. Ingrese los km que quiera: \n");
		printf("2. Ingrese los precios de los vuelos: \n");
		printf("3. Calcular todos los costos: \n");
		printf("4. Informar resultados: \n");
		printf("5. Carga forzada de datos: \n");
		printf("6. Salir: \n");
		fflush(stdin); //Limpia el buffer.
		scanf("%d",&opcion);//use el scanf para que me validara los numeros que ingrese en la opcion.

		switch(opcion) //use swicht para darle un valor a cada numero y hacer su funcion.
		{
		case 1:
			x=PedirKm("Ingrese los km: ", "ERROR, ingrese el km valido");
			break;
		case 2:
			printf("Ingresar precios de vuelos: \n");

			y=PedirPrecioAerolineas("Ingrese los precios de Aerolineas:", "ERROR, ingrese los precios validos");
			z=PedirPrecioLatam("Ingrese los precios de Latam: ", "ERROR, ingrese los precios  validos");
			break;
		case 3://Inicialize las variables km, z, y a 0.
			if(x==0 || z ==0 || y==0)
			{
				printf("No se ha ingresado los datos correspondientes. \n ");
			}
			else
			{
			debitoY=CalcularPrecioDebito(y);
			creditoY=CalcularPrecioCredito(y);
			bitcoinY=CalcularBitcoin(y);
			unitarioY=CalcularUnitario(x,y);

			debitoZ=CalcularPrecioDebito(z);
			creditoZ=CalcularPrecioCredito(z);
			bitcoinZ=CalcularBitcoin(z);
			unitarioZ=CalcularUnitario(x,z);

			diferencia=CalcularDiferencia (y,z);

			printf("Se ha calculado los costos \n");
			}
			break;
		case 4:
			printf("Ingrese el precio aerolineas: \n");

			printf("Precio con tarjeta de débito: $ %.2f \n",debitoY);
			printf("Precio con tarjeta de crédito: $ %.2f \n",creditoY);
			printf("Precio pagando con bitcoin : $ %.11f \n",bitcoinY);
			printf("Precio unitario: $ %.2f \n",unitarioY);

			printf("Ingrese el precio latam: \n");

			printf("Precio con tarjeta de débito: $ %.2f \n",debitoZ);
			printf("Precio con tarjeta de crédito: $ %.2f  \n",creditoZ);
			printf("Precio pagando con bitcoin : $ %.11f \n",bitcoinZ);
			printf("Precio unitario: $ %.2f \n",unitarioZ);

			printf("La diferencia de precio es: $ %.2f \n ",diferencia);

		break;
		case 5: //hice toda la operacion en una funcion para optimizar el codigo.
			CargaForzada();
		break;
		case 6://Mensaje para terminar las opcines.
			printf("Saliendo....");
		break;
		default:
			printf("Ingrese una opcion valida. ");
			system("pause");
		break;
	 }
	}while(opcion !=6);

	return 0;
}
