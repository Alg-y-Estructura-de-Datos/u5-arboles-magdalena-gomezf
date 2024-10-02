#include <iostream>
#include "Arbol/ArbolBinarioAVL.h"
using namespace std;

int main () {
    ArbolBinarioAVL<int> arbol;
int opcion,n ;


    do{
        cout <<"    MENU:  "<<endl;
        cout <<" 1. Insertar codigo " << endl;
        cout <<" 2. eliminar codigo" << endl;
        cout <<" 3. buscar codigo"<< endl;
        cout <<" 4. imprimir el arbol" << endl;
        cout <<" 5. salir" << endl;

        cin >> opcion;
        switch (opcion) {
            case 1:
                cout << "ingrese el codigo";
                cin >> n;
                arbol.put(n);
                break;
            case 2:
                cout << "ingrese el codigo a eliminar";
                cin >> n;
                arbol.remove(n);
                break;
            case 3:
                cout << "ingrese codigo";
                 cin >> n;
                 if (arbol.search(n)){
                     cout << "El producto existe";
                 }
                 else {
                     cout << "el producto no existe";
                 }
                 break;
            case 4:
                arbol.print();
               cout << "\n" <<arbol.getBalance();
                break;
            case 5:
                break;


        }
    } while (opcion !=5);
}