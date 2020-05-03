#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

int main(){
   float tienda [10];
   float venta;
   float sumaVentas;
   float mediaVenta;
   
   for (int i = 1;i<=10;i++){
        cout <<"Ingrese la venta del almacen No. "<<i<<endl;
        cin >> venta;
        tienda[i]=venta;
        sumaVentas = tienda [i]+sumaVentas;
   }
   
    mediaVenta = sumaVentas/10;
   
   for(int j = 1;j<=10;j++){
        if (tienda[j]>mediaVenta){
            cout<<"Almacen No."<<j<<"con ventas mayor a la media"<<endl;
   }
 }
}

