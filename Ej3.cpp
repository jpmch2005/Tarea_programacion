/*
"	Cree una función calcularTotalPagar que llame a calcularDescuento para los dos descuentos y retorne el valor final.
"

"	Llame a calcularTotalPagar y muestre el monto final a pagar.
*/
#include <iostream>
using namespace std;
float calcularDescuento(float precio, float porcentaje){
	float descuento = (precio * porcentaje)/100;
	return descuento;
}
float calcularTotalPagar(float precio, float descuento_fidelidad, float descuento_promocional){
	float des_fidelidad = calcularDescuento(precio, descuento_fidelidad);
	float des_promocional =	calcularDescuento(precio, descuento_promocional);
	float total = precio - des_fidelidad - des_promocional;
	return total;
}
int main(){
	float precio, descuento_fidelidad, descuento_promocional;
	cout << "Ingrese el precio a pagar de su servicio de intenert: $";
	cin >> precio;
	cout << "Ingrese el porcentaje de descuento por  fidelidad: ";
	cin >> descuento_fidelidad;
	cout << "Ingrese el porcentaje de descuento por  promocion: ";
	cin >> descuento_promocional;
	cout << "El total a pagar es de: $";
	float total_con_descuento = calcularTotalPagar(precio, descuento_fidelidad, descuento_promocional);
	cout << total_con_descuento;
	return 0;
}


