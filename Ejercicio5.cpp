#include<iostream>
#include<string>
using namespace std;

class Carrito{
public:
int cantidad;
string producto;
double precio_unitario;
double descuento;
double igv;
double total;
};

int main(){

Carrito c1;
c1.producto="Refrigeradora";
c1.cantidad=3;
c1.precio_unitario=-1999;
c1.descuento=200;   

double subtotal;

subtotal=c1.cantidad*c1.precio_unitario;
c1.igv=subtotal*0.18;
c1.total=(subtotal +c1.igv)-c1.descuento;

cout<<"Producto:"<<c1.producto<<endl;
cout<<"Precio:"<<c1.precio_unitario<<endl;
cout<<"Cantidad:"<<c1.cantidad<<endl;
cout<<"IGV:"<<c1.igv<<endl;
cout<<"Subtotal:"<<subtotal<<endl;
cout<<"Descuento:"<<c1.descuento<<endl;
cout<<"Total:"<<c1.total<<endl;


    return 0;
}
