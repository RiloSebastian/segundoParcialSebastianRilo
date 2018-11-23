#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "LinkedList.h"
#include "producto.h"

int parser_LoadText(FILE* pfile, LinkedList* lista)
{
    int returnAux=-1;
    Producto* auxiliar=NULL;
    char string[1080];
    char* bufferIdProducto;
    char* bufferCodigoProducto;
    char* bufferCuitCliente;
    char* bufferCantidad;
    char* bufferFechaproducto;
    char* bufferPrecioUnitario;
    int auxIdProducto=0;
    float auxprecioUnitario=0;
    int auxCantidad=0;
    if(lista != NULL)
    {
        fscanf(pfile,"%[^\n]\n",string);
        while(!feof(pfile))
        {
            fscanf(pfile,"%[^\n]\n",string);
            bufferIdProducto=strtok(string,",");
            bufferFechaproducto=strtok(NULL,",");
            bufferCodigoProducto=strtok(NULL,",");
            bufferCantidad=strtok(NULL,",");
            bufferPrecioUnitario=strtok(NULL,",");
            bufferCuitCliente=strtok(NULL,"\n");

            if(!utn_isValidEntero(bufferIdProducto,&auxIdProducto) &&
                    !utn_isValidFecha(bufferFechaproducto) &&
                    !utn_isValidNombre(bufferCodigoProducto) &&
                    !utn_isValidEntero(bufferCantidad,&auxCantidad) &&
                    !utn_isValidFlotante(bufferPrecioUnitario,&auxprecioUnitario) &&
                    !utn_isValidTelefono(bufferCuitCliente))
            {
                auxiliar=producto_new();
                producto_setIdProducto(auxiliar,auxIdProducto);
                producto_setFechaproducto(auxiliar,bufferFechaproducto);
                producto_setCodigoProducto(auxiliar,bufferCodigoProducto);
                producto_setCantidad(auxiliar,auxCantidad);
                producto_setPrecioUnitario(auxiliar,auxprecioUnitario);
                producto_setCuitCliente(auxiliar,bufferCuitCliente);
                ll_add(lista,auxiliar);
            }
        }
        returnAux=0;
    }
    return returnAux;
}
