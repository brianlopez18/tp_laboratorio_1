/**
 * @fn float PedirKm(char[], char[]);
 * @brief funcion que pide el ingreso de los kilometros.
 * @param mensaje= el mensaje me va a pedir el ingreso de un numero (km)
 * @param mensajeError = mensaje que va a ser incorrecto segun lo que ingrese el usuario.
 * @return numeroIngresado
 */
float PedirKm(char mensaje[], char mensajeError[]);


/** @fn float PedirPrecioAerolineas(char mensaje[], char mensajeError[]);
 * @brief Funcion que permite ingresar el precio de aerolineas.
 * @param mensaje = mensaje que me indica ingresar los precios de aerolineas.
 * @param mensajeError = mensaje incorrecto al ingresar precio de aerolineas, este mensaje salta cuando el usuario introduce un numero menor a 1.
 * @return numeroIngresado.
 */
float PedirPrecioAerolineas(char mensaje[], char mensajeError[]);

/**@fn float PedirPrecioLatam(char mensaje[], char mensajeError[]);
 * @brief Funcion que permite ingresar el precio de Latam.
 * @param mensaje = mensaje que me indica ingresar el precio de latam.
 * @param mensajeError = mensaje incorrecto al ingresar precio de latam, este mensaje salta cuando el usuario introduce un numero menor a 1.
 * @return numeroIngresado.
 */
float PedirPrecioLatam(char mensaje[], char mensajeError[]);

/**@fn float CalcularPrecioDebito(float precio);
 * @brief funcion que me va a permitir calcular el precio de tarjeta de debito, con un descuento de 10%.
 * @param precio= precio es el descuento de tarjeta de debito.
 * @return descuento.
 */
float CalcularPrecioDebito(float precio);
/**
 * @fn float CalcularPrecioCredito(float)
 * @brief funcion que me permite calcular el precio de debito, dandome un interes del 25%.
 * @param precio =  es el precio con interes de 25%.
 * @return aumento.
 */
float CalcularPrecioCredito(float precio);

/**
 * @fn float CalcularBitcoin(float)
 * @brief Funcion que me va a calcular el valor de bicoin a peso.
 * @param precio= calculo de bitcoin (1BTC -> 4606954.55)  a peso argentino.
 * @return valor;
 */
float CalcularBitcoin(float precio);

/**
 * @fn float CalcularUnitario(float, float)
 * @brief Funcion que me permite calcular el precio por km
 * @param x = serian los km
 * @param precio= es el numero que me va a ingresar el usuario y va a calcular precio por km.
 * @return unitario.
 */
float CalcularUnitario(float x, float precio);

/**
 * @fn float CalcularDiferencia(float, float)
 * @brief Funcion que me va a calcular la diferencia de aerolineas y latam.
 *
 * @param y = precio de aerolineas
 * @param z = precio de latam
 * @return diferencia
 */
float CalcularDiferencia(float y, float z);
/**
 * @fn void CargaForzada(void)
 * @brief Funcion que me va a permitir mostrar la informacion de los datos. Cuando el usuario ingrese la opcion 5. No entra nada a la funcion, ni devuelve nada, solo muestra.
 *
 */
void CargaForzada(void);
