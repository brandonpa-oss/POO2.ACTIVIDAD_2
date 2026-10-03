#include<iostream>
using namespace std;

class Cajero_Automatico{
private:
    int saldo;

bool verificar_saldo(int retirar){
    if((saldo-retirar)<0){   
    return true;
    }
    else{
        return false;
    }
}
void actualizar_saldo(int retirar){
        saldo=saldo-retirar;
}

public:
Cajero_Automatico(){
        saldo=0;
}
void setsaldo(int _saldo){
        if(_saldo<=0){
        cout<<"Monto invalido"<<endl;
    return;}
    else{   
        saldo=_saldo;}}

void retirar_dinero(int retirar){
        if(retirar<=0){
        cout<<"Monto invalido:"<<endl;
        return;
        }
        mostrar_saldo();
    if(verificar_saldo(retirar)){

        cout<<"El monto que quiere retirar excede a su saldo actual"<<endl;
        cout<<"Saldo:"<<saldo<<endl;
    }
    else{
        actualizar_saldo(retirar);
        cout<<"Se retiro:"<<retirar<<endl;
        cout<<"Saldo actual:"<<saldo;

    }}

void mostrar_saldo(){
        cout<<"Saldo:"<<saldo<<endl;
    }};

int main(){
        Cajero_Automatico c1;
        c1.setsaldo(100);
        c1.retirar_dinero(10);

        return 0;

}
