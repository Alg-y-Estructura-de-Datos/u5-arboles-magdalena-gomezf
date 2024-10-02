#include <iostream>
using namespace std;
#include "Arbol/ArbolBinario.h"
using namespace std;
int main() {
    ArbolBinario<int> Arbol1;
    cout << "Ejercicio N 3" << endl;
    Arbol1.put(500);
    Arbol1.put(250);
    Arbol1.put(750);
    Arbol1.put(100);
    Arbol1.put(300);
    Arbol1.put(600);
    Arbol1.put(800);

    cout << "arbola socios " << endl;
    Arbol1.print();
    Arbol1.remove(250);
    Arbol1.remove(300);
    Arbol1.remove(750);


    try{
        int i=Arbol1.search(300);
        cout <<"El socio 300 sigue activo" << endl;

    }
    catch (int e){
        if (e==404){
            cout << "no esta activo el 300" << endl;
        }
    }
    try {
        int j=Arbol1.search(750);
        cout << "El socio 750 sigue activo" << endl;
    }
    catch (int e){
        if (e==404) {
            cout << "no esta activo el 750" << endl;
        }
    }

    Arbol1.print();
    return 0;
}
