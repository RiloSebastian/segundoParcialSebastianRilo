#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED
typedef struct
{
    int idProducto;
    char codigoProducto[50];
    int cantidad;
    float precioUnitario;
    char cuitCliente[15];
    char fechaproducto[15];
}Producto;


Producto* producto_new();
void producto_delete();
Producto* producto_newConParametros(int idProducto,char* codigoProducto,int cantidad,float precioUnitario,char* cuitCliente,char* fechaproducto);

int producto_setIdProducto(Producto* this,int idProducto);
int producto_getIdProducto(Producto* this,int* idProducto);

int producto_setCodigoProducto(Producto* this,char* codigoProducto);
int producto_getCodigoProducto(Producto* this,char* codigoProducto);

int producto_setCantidad(Producto* this,int cantidad);
int producto_getCantidad(Producto* this,int* cantidad);

int producto_setPrecioUnitario(Producto* this,float precioUnitario);
int producto_getPrecioUnitario(Producto* this,float* precioUnitario);

int producto_setCuitCliente(Producto* this,char* cuitCliente);
int producto_getCuitCliente(Producto* this,char* cuitCliente);

int producto_setFechaproducto(Producto* this,char* fechaproducto);
int producto_getFechaproducto(Producto* this,char* fechaproducto);
int producto_mostrarUno(void* pElement);
int producto_cantVentasTotales(void* pElement);
int producto_cantVentasmayores(void* pElement);
int producto_cantVentasMenores(void* pElement);
int producto_cantVentasLcd(void* pElement);

#endif // PRODUCTO_H_INCLUDED
