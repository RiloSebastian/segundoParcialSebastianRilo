#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "LinkedList.h"
#include "producto.h"

int informe_saveText(FILE* pFile, LinkedList* lista)
{
    int returnAux=-1;
    int acumuladorCant=0;
    int acumuladorVentaMayor=0;
    int acumuladorVentaMenor=0;
    int cantLCD=0;

    if(pFile != NULL && lista != NULL)
    {
        acumuladorCant=ll_count(lista,producto_cantVentasTotales);
        acumuladorVentaMayor=ll_count(lista,producto_cantVentasmayores);
        acumuladorVentaMenor=ll_count(lista,producto_cantVentasMenores);
        cantLCD=ll_count(lista,producto_cantVentasLcd);

        fprintf(pFile,"*******************************************************\n");
        fprintf(pFile,"                 INFORME DE VENTAS\n");
        fprintf(pFile,"*******************************************************\n");
        fprintf(pFile," cantidad de unidades vendidas totales: %d\n",acumuladorCant);
        fprintf(pFile," cantidad de ventas por un monto mayor a $10000: %d\n",acumuladorVentaMayor);
        fprintf(pFile," cantidad de de ventas por un monto menor a $20000: %d\n",acumuladorVentaMenor);
        fprintf(pFile," cantidad de lcd vendidas: %d\n",cantLCD);
        returnAux=0;
    }
    return returnAux;
}
