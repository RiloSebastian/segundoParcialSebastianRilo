#ifndef PARSER_H_INCLUDED
#define PARSER_H_INCLUDED
#include "LinkedList.h"

/** \brief guarda los datos de los productos al archivo informes.txt (modo texto).
 *
 * \param path char*
 * \param lista LinkedList*
 * \return int
 *
 */
int parser_LoadText(FILE* pfile, LinkedList* lista);
#endif // PARSER_H_INCLUDED
