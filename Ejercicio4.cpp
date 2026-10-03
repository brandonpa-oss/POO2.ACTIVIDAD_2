#include<iostream>
#include<string>

using namespace std;

class Cuenta{
private:
string usuario;
string contraseña;

public:

Cuenta(string _usuario,string _contraseña){
    usuario=_usuario;
    contraseña=_contraseña;
}
void cambiar_contraseña(string contraseña_actual,string contraseña_nueva){
    if(contraseña_actual==contraseña){
        contraseña=contraseña_nueva;
        cout<<"La contraseña se cambio correctamente"<<endl;
    }
    else{
        cout<<"Contraseña incorrecta"<<endl;
        cout<<"Vuelva a intentarlo"<<endl;
    }
}
};
int main(){
Cuenta c1("Paisana123","Tellamalallama");
c1.cambiar_contraseña("Tellamalallama","holi123");

    return 0;
}
