#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "controller.h"
#include "producto.h"

int main()
{
    LinkedList* listaProductos=ll_newLinkedList();
    printf("cargando datos\n");
    controller_loadFromText("data.csv",listaProductos);
    printf("datos cargados\n");
    ll_map(listaProductos,producto_mostrarUno);
    printf("guardando datos\n");
    controller_saveAsText("informes.txt",listaProductos);
    printf("datos guardados\n");
    return 0;
}
