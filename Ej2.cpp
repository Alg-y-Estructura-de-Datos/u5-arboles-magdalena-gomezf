#include <iostream>
using namespace std;

#include "Arbol/ArbolBinario.h"
using namespace std;
int main() {

    ArbolBinario<int> Arbol1;

    cout << "Ejercicio N 2" << endl;
    Arbol1.put(4001);
    Arbol1.put(2002);
    Arbol1.put(6003);
    Arbol1.put(1500);
    Arbol1.put(3500);
    Arbol1.put(5000);
    Arbol1.put(7000);

    Arbol1.print();
    Arbol1.remove(2002);
    Arbol1.remove(6003);


    Arbol1.put(2500);
    cout << endl;
    Arbol1.print();
    try{
        int j=Arbol1.search(4001);
        cout << "EL numero 4001 todavia siguen en el sistema";
    }
    catch(int e) {
        if(e==404){
            cout << "El numero 4001 no se encuentra en el sistema";
        }
    }

    return 0;
}
