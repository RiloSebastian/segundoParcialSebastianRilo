#include "producto.h"
#include "LinkedList.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


Producto* producto_new()
{
    Producto* this;
    this=malloc(sizeof(Producto));
    return this;
}

void producto_delete(Producto* this)
{
    free(this);
}

Producto* producto_newConParametros(int idProducto,char* codigoProducto,int cantidad,float precioUnitario,char* cuitCliente,char* fechaproducto)
{
    Producto* this;
    this=producto_new();

    if(
        !producto_setIdProducto(this,idProducto)&&
        !producto_setCodigoProducto(this,codigoProducto)&&
        !producto_setCantidad(this,cantidad)&&
        !producto_setPrecioUnitario(this,precioUnitario)&&
        !producto_setCuitCliente(this,cuitCliente)&&
        !producto_setFechaproducto(this,fechaproducto))
        return this;

    producto_delete(this);
    return NULL;
}

int producto_setIdProducto(Producto* this,int idProducto)
{
    int retorno=-1;
    if(this!=NULL)
    {
        this->idProducto=idProducto;
        retorno=0;
    }
    return retorno;
}

int producto_getIdProducto(Producto* this,int* idProducto)
{
    int retorno=-1;
    if(this!=NULL)
    {
        *idProducto=this->idProducto;
        retorno=0;
    }
    return retorno;
}

int producto_setCodigoProducto(Producto* this,char* codigoProducto)
{
    int retorno=-1;
    if(this!=NULL && codigoProducto!=NULL)
    {
        strcpy(this->codigoProducto,codigoProducto);
        retorno=0;
    }
    return retorno;
}

int producto_getCodigoProducto(Producto* this,char* codigoProducto)
{
    int retorno=-1;
    if(this!=NULL && codigoProducto!=NULL)
    {
        strcpy(codigoProducto,this->codigoProducto);
        retorno=0;
    }
    return retorno;
}

int producto_setCantidad(Producto* this,int cantidad)
{
    int retorno=-1;
    if(this!=NULL)
    {
        this->cantidad=cantidad;
        retorno=0;
    }
    return retorno;
}

int producto_getCantidad(Producto* this,int* cantidad)
{
    int retorno=-1;
    if(this!=NULL)
    {
        *cantidad=this->cantidad;
        retorno=0;
    }
    return retorno;
}

int producto_setPrecioUnitario(Producto* this,float precioUnitario)
{
    int retorno=-1;
    if(this!=NULL)
    {
        this->precioUnitario=precioUnitario;
        retorno=0;
    }
    return retorno;
}

int producto_getPrecioUnitario(Producto* this,float* precioUnitario)
{
    int retorno=-1;
    if(this!=NULL)
    {
        *precioUnitario=this->precioUnitario;
        retorno=0;
    }
    return retorno;
}

int producto_setCuitCliente(Producto* this,char* cuitCliente)
{
    int retorno=-1;
    if(this!=NULL && cuitCliente!=NULL)
    {
        strcpy(this->cuitCliente,cuitCliente);
        retorno=0;
    }
    return retorno;
}

int producto_getCuitCliente(Producto* this,char* cuitCliente)
{
    int retorno=-1;
    if(this!=NULL && cuitCliente!=NULL)
    {
        strcpy(cuitCliente,this->cuitCliente);
        retorno=0;
    }
    return retorno;
}

int producto_setFechaproducto(Producto* this,char* fechaproducto)
{
    int retorno=-1;
    if(this!=NULL && fechaproducto!=NULL)
    {
        strcpy(this->fechaproducto,fechaproducto);
        retorno=0;
    }
    return retorno;
}

int producto_getFechaproducto(Producto* this,char* fechaproducto)
{
    int retorno=-1;
    if(this!=NULL && fechaproducto!=NULL)
    {
        strcpy(fechaproducto,this->fechaproducto);
        retorno=0;
    }
    return retorno;
}


int producto_mostrarUno(void* pElement)
{
    int returnAux=-1;
    Producto* elemento;
    if(pElement != NULL)
    {

        elemento=(Producto*)pElement;
        printf("%5d -- %10s -- %15s -- %5d -- %8.2f -- %15s\n",elemento->idProducto,elemento->fechaproducto,
               elemento->codigoProducto,elemento->cantidad,
               elemento->precioUnitario,elemento->cuitCliente);
        returnAux=0;
    }
    return returnAux;
}


int producto_cantVentasTotales(void* pElement)
{
    int returnAux=-1;
    Producto* elemento;
    int cantidad=0;

    if(pElement != NULL)
    {

        elemento=(Producto*)pElement;
        producto_getCantidad(elemento,&cantidad);
        returnAux=cantidad;
    }
    return returnAux;
}

int producto_cantVentasmayores(void* pElement)
{
    int returnAux=-1;
    Producto* elemento;
    float precio=0;
    float comparador=10000;
    int cantidad=0;
    if(pElement != NULL)
    {

        elemento=(Producto*)pElement;
        producto_getPrecioUnitario(elemento,&precio);
        if(precio > comparador)
        {
            cantidad++;
        }
        returnAux=cantidad;
    }
    return returnAux;
}


int producto_cantVentasMenores(void* pElement)
{
    int returnAux=-1;
    Producto* elemento;
    float precio=0;
    int cantidad=0;

    if(pElement != NULL)
    {

        elemento=(Producto*)pElement;
        producto_getPrecioUnitario(elemento,&precio);
        if(precio < 20000.00)
        {
            cantidad++;
        }
        returnAux=cantidad;
    }
    return returnAux;
}

int producto_cantVentasLcd(void* pElement)
{
    int returnAux=-1;
    Producto* elemento;
    char codigo[50];
    char* aux;
    int cantidad=0;
    if(pElement != NULL)
    {

        elemento=(Producto*)pElement;
        producto_getCodigoProducto(elemento,codigo);

        aux=strtok(codigo,"_");
        if(strcmp("LCD",aux)==0)
        {
            cantidad++;

        }
        returnAux=cantidad;
    }
    return returnAux;
}
