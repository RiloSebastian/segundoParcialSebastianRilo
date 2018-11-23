#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED

/** \brief guarda un flotante
 * \param mensaje char un mensaje
 * \param flotante float donde se guarda el numero
 * \return float Return el numero a guardar
 *
 */
float utn_setFlotante(char mensaje[], float flotante);


/** \brief guarda un entero
 * \param mensaje char un mensaje
 * \param entero int donde se guarda el numero
 * \return int Return el numero a guardar
 *
 */
int utn_setEntero(char mensaje[], int entero);


/** \brief guarda un nombre
 * \param mensaje char un mensaje
 * \param texto char donde se guarda el nombre
 * \param len int tamanio de la variable donde se guarda el nombre
 * \param
 * \return int (0) if error - (1) if ok
 *
 */
int utn_setNombre(char mensaje[], char texto[], int len);


/** \brief guarda un texto
 * \param mensaje char un mensaje
 * \param texto char donde se guarda el tetxo
 * \param len int tamanio de la variable donde se guarda el texto
 * \return int (0) if error - (1) if ok
 *
 */
int utn_setTexto(char mensaje[], char texto[], int len);


/** \brief guarda un numero cuit
 * \param mensaje char un mensaje
 * \param cuit char donde se guarda el numero cuit
 * \param len int tamanio de la variable donde se guarda el numero cuit
 * \return int (0) if error - (1) if ok
 *
 */
int utn_setCuit(char mensaje[], char cuit[], int len);


/** \brief guarda un numero flotante dentro de un margen
 * \param mensaje char un mensaje
 * \param flotante float donde se va a guardar el numero
 * \param min float el numero flotante minimo disponible
 * \param max float el numero flotante maximo disponible
 * \return float Return the float number
 *
 */
float utn_setMargenFlotante(char mensaje[], float flotante, float min, float max);


/** \brief guarda un numero entero dentro de un margen
 * \param mensaje char un mensaje
 * \param entero int donde se va a guardar el numero
 * \param min int el numero entero minimo disponible
 * \param max int el numero entero maximo disponible
 * \return float Return the float number
 *
 */
int utn_setMargenEntero(char mensaje[], int entero, int min, int max);


/** \brief valida que los caracteres de la cadena sean numericos(decimal)
 * \param str char la cadena de caracteres a validar
 * \return int (0) si no es correcto - (1) si ok
 *
 */
int utn_validarFlotante(char str[]);

/** \brief valida que los caracteres de la cadena sean numericos(enteros)
 * \param str char la cadena de caracteres a validar
 * \return int (0) si no es correcto - (1) si ok
 *
 */
int utn_validarEntero(char str[]);

/** \brief valida que los caracteres de la cadena sean alfabeticos
 * \param str char la cadena de caracteres a validar
 * \return int (0) si no es correcto - (1) si ok
 *
 */
int utn_validarAlfabetico(char str[]);

/** \brief valida todos los caracteres.
 * \param str char la cadena de caracteres a validar
 * \return int (0) si no es correcto - (1) si ok
 *
 */
int utn_validarAlfanumerico(char str[]);

/** \brief valida que los caracteres se puedan usar para unnumero cuit
 * \param str char la cadena de caracteres a validar
 * \return int (0) si no es correcto - (1) si ok
 *
 */
int utn_validarCuit(char str[]);

/** \brief confirma que el entero es valido
 * \param auxEntero char la cadena de caracteres a validar
 * \return int (0) si no es correcto - (1) si ok
 *
 */
int utn_isValidEntero(char* auxEntero, int* entero);

/** \brief confirma que el flotante es valido
 * \param auxEntero char la cadena de caracteres a validar
 * \return int (0) si no es correcto - (1) si ok
 *
 */
int utn_isValidFlotante(char* auxFlotante, float* flotante);

/** \brief confirma que el nombre es valido
 * \param auxEntero char la cadena de caracteres a validar
 * \param flotante float* el flotante
 * \return int (0) si no es correcto - (1) si ok
 *
 */
int utn_isValidNombre(char* bufferNombre);

/** \brief confirma que el estado es valido
 * \param auxEntero char la cadena de caracteres a validar
 * \return int (0) si no es correcto - (1) si ok
 *
 */
int utn_isValidEstado(char* bufferEstado);

/** \brief confirma que la fecha es valida
 * \param auxEntero char la cadena de caracteres a validar
 * \return int (0) si no es correcto - (1) si ok
 *
 */
int utn_isValidFecha(char* bufferFecha);

/** \brief confirma que el entero con '-' es valido
 * \param auxEntero char la cadena de caracteres a validar
 * \return int (0) si no es correcto - (1) si ok
 *
 */
int utn_isValidTelefono(char* bufferTelefono);
#endif
