#ifndef CONTROLLER_H_INCLUDED
#define CONTROLLER_H_INCLUDED
#include "LinkedList.h"

/** \brief Carga los datos de los productos desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param lista LinkedList*
 * \return int
 *
 */
int controller_loadFromText(char* path, LinkedList* pArrayListPersona);

/** \brief guarda los datos de los productos al archivo informes.txt (modo texto).
 *
 * \param path char*
 * \param lista LinkedList*
 * \return int
 *
 */
int controller_saveAsText(char* path, LinkedList* pArrayListPersona);
#endif // CONTROLLER_H_INCLUDED
