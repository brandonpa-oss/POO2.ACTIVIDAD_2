#include<iostream>
#include<string>
using namespace std;

class Factura_de_Compra{
private:
    string producto;
    double precio;
    
public:

Factura_de_Compra(string _producto,double _precio){
    if(_precio<=0){
        cout<<"Precio Invalido"<<endl;
        precio=0;
        producto="";
        }
    else{
        producto=_producto;
        precio=_precio;}
    }

void imprimir_factura(){
    if(precio==0){
        cout<<"Error nose puede procesar"<<endl;
        return ;
    }
        double valor_igv=precio*0.18;
        double total=precio+valor_igv;   
        cout<<"Producto:"<<producto<<endl;
        cout<<"Precio:"<<precio<<endl;
        cout<<"Total:"<<total<<endl;
    }

};
int main(){

    Factura_de_Compra f1("Licuadora",250);
    f1.imprimir_factura();


    return 0;
}