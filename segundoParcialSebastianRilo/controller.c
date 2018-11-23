#include <stdio.h>
#include <stdlib.h>
#include "parser.h"
#include "controller.h"
#include "utn.h"
#include "LinkedList.h"
#include "producto.h"
#include "informe.h"

/** \brief Carga los datos de los productos desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param lista LinkedList*
 * \return int
 *
 */
int controller_loadFromText(char* path, LinkedList* lista)
{
    int retorno=-1;
    FILE* pFile;
    if(path != NULL && lista != NULL)
    {
        pFile=fopen(path,"r");
        if(pFile != NULL)
        {
            retorno=0;
            parser_LoadText(pFile,lista);
        }
        fclose(pFile);
    }
    return retorno;
}


/** \brief guarda los datos de los productos al archivo informes.txt (modo texto).
 *
 * \param path char*
 * \param lista LinkedList*
 * \return int
 *
 */
int controller_saveAsText(char* path, LinkedList* lista)
{
    int retorno=-1;
    FILE *pArchivo=fopen(path,"w");

    if(lista != NULL && pArchivo != NULL)
    {
        informe_saveText(pArchivo,lista);
        retorno=0;
    }
    fclose(pArchivo);
    return retorno;
}

