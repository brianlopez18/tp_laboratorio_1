/*
	 Una agencia de viaje necesita calcular costos para sus vuelos de Latam y Aerol�neas Argentinas
	para ofrecerlos a sus clientes.
	Se deber� ingresar por cada vuelo los km totales y el precio total del mismo.
	El objetivo de la aplicaci�n es mostrar las diferentes opciones de pagos a sus clientes.
	Para ello el programa iniciar� y contar� con un men� de opciones:
	1. Ingresar Kil�metros: ( km=x)
	2. Ingresar Precio de Vuelos: (Aerol�neas=y, Latam=z)
	- Precio vuelo Aerol�neas:
	- Precio vuelo Latam:
	3. Calcular todos los costos:
	a) Tarjeta de d�bito (descuento 10%)
	b) Tarjeta de cr�dito (inter�s 25%)
	c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
	d) Mostrar precio por km (precio unitario)
	e) Mostrar diferencia de precio ingresada (Latam - Aerol�neas)
	4. Informar Resultados
	�Latam:
	a) Precio con tarjeta de d�bito: r
	b) Precio con tarjeta de cr�dito: r
	c) Precio pagando con bitcoin : r
	d) Precio unitario: r
	Aerol�neas:
	a) Precio con tarjeta de d�bito: r
	b) Precio con tarjeta de cr�dito: r
	c) Precio pagando con bitcoin : r
	d) Precio unitario: r
	La diferencia de precio es : r �
	5. Carga forzada de datos
	6. Salir

 */
//	Brian Lopez 1�c
// Trabajo Practico n�1

#include <stdio.h>
#include <stdlib.h>

#include "Funciones.h" //Relacione las biblioteca para las funciones

int main(void)
{
	setbuf(stdout, NULL);//Sirve para imponer un acoplamiento por l�neas a un flujo
	int opcion; //OPCIONES DEL MENU
	//iNICIALICE VARIABLES.
	float x=0; //Kilometros
	float y=0;//Aerolineas
	float z=0;//Latam
	//AEROLINEAS
	float debitoY=0; //Tarjeta de d�bito
	float creditoY=0; //Tarjeta de cr�dito
	float bitcoinY=0; //Bitcoin a peso
	float unitarioY=0; //Precio unitario
	//LATAM
	float debitoZ=0;//Tarjeta de d�bito
	float creditoZ=0;//Tarjeta de cr�dito
	float bitcoinZ=0;//Bitcoin a peso
	float unitarioZ=0;//Precio unitario
	//DIFERENCIA DE AEROLINEAS Y LATAM.
	float diferencia=0;//diferencia de precio ingresada (Latam - Aerol�neas)

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

			printf("Precio con tarjeta de d�bito: $ %.2f \n",debitoY);
			printf("Precio con tarjeta de cr�dito: $ %.2f \n",creditoY);
			printf("Precio pagando con bitcoin : $ %.11f \n",bitcoinY);
			printf("Precio unitario: $ %.2f \n",unitarioY);

			printf("Ingrese el precio latam: \n");

			printf("Precio con tarjeta de d�bito: $ %.2f \n",debitoZ);
			printf("Precio con tarjeta de cr�dito: $ %.2f  \n",creditoZ);
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
