#include <stdio.h>
#include <string.h>
int opcion;
float suma_total=0;
float lista_precios[] = { 30,40,80,};


void main()
{
  int  kilos, valorbillete;
  char billete;
 float descuento_total,descuento,costo,gasto,cambio;
            printf("\t\t\tWelcome to Orlando's Fruit Shop\n");
            printf("Aqui esta el menu\n");
    printf(" 0 MANGO..............$30\n");
    printf(" 1 MANZANA.............$40\n");
    printf(" 2 UVA................$80\n");
    printf(" 3 FINALIZAR COMPRA\n");
        printf("\n Tenemos promociones de mayoreo en cualquier fruta para los mejores clientes\n");
        printf(" Si compras entre 5 y menos de 10 kilos,el descuento sera 12 por ciento\n");
        printf(" Si compras entre 10 y menos de 20 kilos,el descuento sera 25 por ciento\n");
        printf(" Si compras de 20 kilos en adelante, el descuento sera 50 por ciento\n");
    do {
    printf("\nQue fruta desea comprar(inserte el numero) o finalice la compra: ");scanf("%i",&opcion);
    
   if (opcion == 3){
            printf(" Deberia de pagar $%.2f\n",gasto);
            printf(" Pero va a pagar $%.2f\n",suma_total);
            printf(" Porque su descuento fue de $%.2f\n",descuento_total);
            printf(" Gracias por su compra\n");return 0;
    }
    printf("\nCuantos kilos quiere de esa fruta?: ");scanf("%i",&kilos);
costo = (lista_precios[opcion]*kilos);
if (kilos >= 5 && kilos < 10){
        descuento = (costo*0.125);
}
if (kilos >=10 && kilos< 20){
        descuento= (costo*0.25);
}
if (kilos >=20){
        descuento= (costo*0.5);
}
gasto += costo;
descuento_total += descuento;
     suma_total = (gasto-descuento_total);
    }
   while (opcion != 3);


return 0;
}
