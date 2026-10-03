#include <iostream>
#include <string>

using namespace std;

class  Heroe{
private:
string nombre;
int vida;
int mana;
public:

Heroe(string _nombre,int _vida,int _mana){
    nombre=_nombre;
    vida=_vida;
    mana=_mana;

}
void lanzar_hechizo(){
    if(mana>=50){
        mana=mana-50;
        cout<<"Hechizo lanzado"<<endl;
        cout<<"Mana restante:"<<mana<<endl;
    }
    else{
        cout<<"Mana insuficiente"<<endl;
    }
}
};

int main() {

    Heroe h1("Ilidan",500,200);
    h1.lanzar_hechizo();


    return 0;
}