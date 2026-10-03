#include<iostream>
#include<string>

using namespace std;

class Carrito{
private:
string producto;
double precio_unitario;
double cantidad;
double descuento;

public:

Carrito(string _producto,double _precio,double _cantidad,double _descuento){
if(_precio<=0 || _cantidad<=0 || _descuento<0){
    producto="";
    precio_unitario=0;
    descuento=0;
    cantidad=0;}
else{
  producto=_producto;
    precio_unitario=_precio;
    descuento=_descuento;
    cantidad=_cantidad;  
}
}
double calcular_total(){
    double subtotal=cantidad*precio_unitario;
    double igv=subtotal*0.18;
    
    return subtotal+igv-descuento;
}
void imprimir_boleta(){
    if(precio_unitario==0){
        cout<<"Error nose pude procesar la boleta por datos invalidos"<<endl;
        return ;
    }
    double subtotal=cantidad*precio_unitario;
    double igv=subtotal*0.18;

    cout<<"Producto:"<<producto<<endl;
    cout<<"Precio:"<<precio_unitario<<endl;
    cout<<"Cantidad:"<<cantidad<<endl;
    cout<<"Descuento:"<<descuento<<endl;
    cout<<"IGV:"<<igv<<endl;
    cout<<"Subtotal:"<<subtotal<<endl;
    cout<<"Total:"<<calcular_total()<<endl;

}
};
int main(){
Carrito c1("Refrigeradora",1999,3,200);
c1.imprimir_boleta();
    return 0;
}

