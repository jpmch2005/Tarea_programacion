#include <iostream>
using namespace std;

int main() {
    int numeros[5];  
    int opcion;
    int suma = 0;  
    cout << "\n ---Bienvenido al menu de opciones---" << endl;
    cout << "1. Llenar arreglo" << endl;
    cout << "2. Sumar los elementos del arreglo" << endl;
    cout << "3. Modificar una posicion" << endl;
    cout << "4. Salir" << endl;
    cout << "Ingrese la opcion que desea del menu: " << endl;
    cin >> opcion;

    while (opcion != 4) {
        switch (opcion) {
            case 1:
                cout << "Usted escogio llenar un arreglo" << endl;
                for (int i = 0; i <= 4; i++) {  
                    cout << "Ingrese el numero de la posicion " << i + 1 << ":" << endl;
                    cin >> numeros[i];
                }
                cout << "El llenado de su arreglo se realizo correctamente" << endl;
                cout << "Y los numeros de su arreglo son: ";
                for (int i = 0; i <= 4; i++) {  
                    cout << numeros[i] << " ";
                }
                cout << endl;
                break;
            case 2:
                cout << "Usted escogio sumar los elementos del arreglo" << endl;
                suma = 0;  
                for (int i = 0; i <= 4; i++) { 
                    suma += numeros[i];   
                }
                cout << "La suma de sus elementos es: " << suma << endl;
                cout << endl;
                break;
            case 3:
                cout << "Usted escogio modificar una opcion del arreglo" << endl;
                int posicion, nuevoValor;
                cout << "Ingrese la posicion que desea editar de (0 a 4): " ;
                cin >> posicion;
                if(posicion >= 0 and posicion <= 4){
					cout << "Ingrese el nuevo valor para la posicion " << posicion << ": ";
					cin >> nuevoValor;
					numeros[posicion] = nuevoValor;  
					cout << "La posicion " << posicion << " ha sido modificada con el nuevo valor: " << nuevoValor << endl;
					cout << "Y los numeros de su arreglo son: ";
					for (int i = 0; i <= 4; i++) {  
					    cout << numeros[i] << " ";
					}
				}else{
					cout << "Error esa posicion no existe" << endl;
				}
				cout << endl;
                break;
            case 4:
                break;
            default:
                cout << "Ingrese una opcion correcta" << endl;
                break;
        }
        cout << "\n ---Bienvenido al menu de opciones---" << endl;
        cout << "1. Llenar arreglo" << endl;
        cout << "2. Sumar los elementos del arreglo" << endl;
        cout << "3. Modificar una posición" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese la opcion que desea del menu: ";
        cin >> opcion;
    }
    cout << "Muchas gracias por usar el sistema" << endl;
    return 0;
}
