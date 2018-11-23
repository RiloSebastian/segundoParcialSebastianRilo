#ifndef INFORME_H_INCLUDED
#define INFORME_H_INCLUDED

/** \brief guarda los datos de los productos al archivo informes.txt (modo texto).
 *
 * \param path char*
 * \param lista LinkedList*
 * \return int
 *
 */
int informe_saveText(FILE* pFile, LinkedList* lista);

#endif // INFORME_H_INCLUDED
