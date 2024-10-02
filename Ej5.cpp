#include <iostream>
using namespace std;
#include "Arbol/ArbolBinario.h"
using namespace std;
int main() {
    ArbolBinario<int> Arbol1;
    cout << "Ejercicio N 5" << endl;
    Arbol1.put(1001);
    Arbol1.put(5002);
    Arbol1.put(3003);
    Arbol1.put(2004);
    Arbol1.put(4500);
    Arbol1.put(7005);
    Arbol1.put(8006);

    Arbol1.remove(2004);
    Arbol1.remove(4500);

    Arbol1.put(3500);
    try{
        int j=Arbol1.search(1001);
        cout << "EL paquete 1001 sigue en transito" << endl;
    }
    catch (int e){
        if (e==404){
            cout << "el paquete 1001 no sigue en transito" << endl;
        }
    }
    Arbol1.print();
}