#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;
bool funcion1(ArbolBinario<int> &arbol, int n) {

    try {
        int j = arbol.search(n);
        return true;
    }
    catch (int e){
        if (e==404) {
            return false;
        }
    }

}

void funcion(ArbolBinario<int> &arbol, int n){

    arbol.remove(n);

}

int main() {

    ArbolBinario<int>Arbol1;
    cout << "Ejercicio N 1" << endl;
    Arbol1.put(101);
    Arbol1.put(52);
    Arbol1.put(198);
    Arbol1.put(36);
    Arbol1.put(75);
    Arbol1.put(150);
    Arbol1.put(200);

    if (funcion1(Arbol1, 75)){
        cout << "el numero 75 si se encuentra"<< endl;
    } else {
        cout << "el 75 no se encuentra" << endl;
    }
    funcion(Arbol1,52);

    Arbol1.print();
    return 0;
}
