/*Desarrolle un programa en C++ que utilice cuatro funciones además del main.
1.	Función ingresarDatos
Una función que reciba un arreglo y su tamaño, y que permita ingresar los 8 precios desde el teclado.
2.	Función encontrarMayorMenor
Una función que reciba el arreglo de precios y su tamaño, 
y que devuelva mediante parámetros por referencia el mayor precio y el menor precio ingresados.
3.	Función mostrarDatosProgramador
Una función de tipo void que muestre en pantalla el nombre del programador y sus datos personales.
4.	Función calcularDescuento
Una función de tipo void que pida el nombre de un producto y su precio,
 y calcule el 10% de descuento únicamente si el precio es mayor a 1000, mostrando el precio final.
El main debe declarar el arreglo de 8 precios y llamar a cada una de las funciones anteriores.
*/
#include <iostream>
#include <string>
using namespace std;

void ingresarDatos(float precios[]) {
    for (int i = 0; i < 8; i++) {
        cout << "Ingrese el " << i + 1 << " precio: $";
        cin >> precios[i];
    }
}

void mayormenor(float precios[]) {
    float mayor = precios[0];
    float menor = precios[0];
    for (int i = 1; i < 8; i++) {
        if (precios[i] > mayor) mayor = precios[i];
        if (precios[i] < menor) menor = precios[i];
    }
    cout << "Mayor: " << mayor << endl;
    cout << "Menor: " << menor << endl;
}
void datospersonales(){
	cout<<"Nombre del Programador: Jean Paul Medrano:"<<endl;
	cout<<"telf: 0995124042 "<< endl;
	cout<<"Cdi: 1724232994" << endl;
}
void calculardescuento(){
	string nombre;
	float precio;
	float descuento;
	float total;
	cout<< "Ingrese el nombre del producto: "<< endl;
	cin>> nombre;
	cout<< "Ingrese el precio del producto: "<< endl;
	cin>> precio;
	if(precio>1000){
		descuento= (precio*0.1);
		total= precio-descuento;
		cout<<"El valor a cancelar con el descuento es: "<<total<<endl;
	}else{
		cout<<"El valor a cancelar es: "<<precio<< endl;
	}
}
int main() {
    float precios[8];
    ingresarDatos(precios);
    mayormenor(precios);
    datospersonales();
    calculardescuento();
    return 0;
}
