#include <iostream>
using namespace std;

int main() {
    int opcion, edad, metodo;
    bool continuar = true;

    while (continuar) {
        cout << "\n---- MENU CLARO EP ----\n";
        cout << "1. Telefonia Fija ($7.99)\n";
        cout << "2. TV Satelital ($28.50)\n";
        cout << "3. Internet Hogar ($18.00)\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        if (opcion == 4) {
            cout << "Saliendo...\n";
            break;
        }

        if (opcion < 1 || opcion > 4) {
            cout << "Opcion invalida.\n";
            continue;
        }

        float base = 0;
        string nombre = "";
        if (opcion == 1) { nombre = "Telefonia Fija"; base = 7.99; }
        if (opcion == 2) { nombre = "TV Satelital";   base = 28.50; }
        if (opcion == 3) { nombre = "Internet Hogar"; base = 18.00; }

        cout << "Ingrese la edad del cliente: ";
        cin >> edad;

        float descuentoEdad = 0;
        if (edad > 65) {
            descuentoEdad = base * 0.50;
            base -= descuentoEdad;
        }

        float iva = base * 0.15;
        float ice = 0;

        if (opcion == 2) ice = base * 0.15;

        float totalMensual = base + iva + ice;

        float instalacion = 120;
        cout << "\nMetodo de pago instalacion:\n";
        cout << "1. Tarjeta de credito (50% desc.)\n";
        cout << "2. Efectivo (10% desc.)\n";
        cout << "3. Otro (sin desc.)\n";
        cout << "Seleccione opcion: ";
        cin >> metodo;

        if (metodo == 1) instalacion *= 0.5;
        if (metodo == 2) instalacion *= 0.9;
        
        cout << "\n----- RESUMEN -----\n";
        cout << "Servicio: " << nombre << endl;
        cout << "Precio base final: $" << base << endl;
        cout << "IVA: $" << iva << endl;
        cout << "ICE: $" << ice << endl;
        cout << "Descuento tercera edad: $" << descuentoEdad << endl;
        cout << "Total mensual: $" << totalMensual << endl;
        cout << "Instalacion final: $" << instalacion << endl;
        cout << "-------------------\n";
    }

    return 0;
}
