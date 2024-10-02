#include <iostream>
using namespace std;
#include "Arbol/ArbolBinario.h"
using namespace std;
int main() {
    ArbolBinario<int> Arbol1;
    cout << "Ejercicio N 4" << endl;
    Arbol1.put(15);
    Arbol1.put(10);
    Arbol1.put(20);
    Arbol1.put(5);
    Arbol1.put(12);
    Arbol1.put(18);
    Arbol1.put(25);

    Arbol1.remove(10);
    Arbol1.remove(20);
    Arbol1.remove(12);

    Arbol1.put(13);
    try {
        int j= Arbol1.search(12);
        cout << "La mesa nuemro 12 aun sigue reservada" << endl;

    }catch (int e){
        if (e==404){
            cout << "La mesa numero 12 ya no esta reservada" << endl;
        }
    }
    Arbol1.print();

}
