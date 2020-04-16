//Ejercicio 1

#include <iostream>
using namespace std;
int main() {
	int n1, n2;
	float num1,num2;
	cout << "Digite el primer numero : "; cin >> n1;
	cout << "Digite el segundo nuro : "; cin >> n2;
	
	cout << "La suma de los numeros es :" << n1 + n2 << endl;
	cout << "La resta de los numeroes es :" << n1 - n2 << endl;
	cout << "La multiplicaion de los numeros es :" << n1 * n2 << endl;
	
	if (n2 == 0) {
		cout << "No se puede dividir entre 0" << endl;
		
	}else {
		num1 = n1;
		num2 = n2;
		cout << " \nLa division es :" << num1/ num2 << endl;
		cout << "El residuo es  : " << n1 % n2 << endl;
	}


	if (n1 > n2) {
		cout << "El numero mayor es : " << n1 << endl;
		cout << "El numero menor es : " << n2 << endl;
	}else if (n1 < n2) {
		cout << "El numero mayor es :" << n2 << endl;
		cout << "El numero mayor es :" << n1 << endl;
	}else {
		cout << "Los numeros "<< n1 << " y " << n2 <<" son iguales" << endl;
	}

	if (n1 == 0 || n2 == 0) {
		cout << "Uno de los numeros es 0,no se puede realizar la operacion " << endl;
	}else if (n1 % n2 == 0) {
		cout <<n2 << " es divisor de " << n1 << endl;
	}else if (n2 % n1 == 0){
	    cout << n1 << "es divisor de " << n2 << endl;
	}
	else {
		cout << n1 << " no es divisor de " << n2 << " y tampoco " << n2 << " es divisor de " << n1 << endl;
	}
	
	return 0;

	
}





//Ejercicio 2

#include <iostream>
#include <cmath>
using namespace std;
int main() {

	int op1, op2;
	char suma = '+', resta = '-', multiplicacion = '*', division = '/', residuo = '%', raiz_cuadrada = '~', opcion;

	
	cout << "Eliga la operacion que desea realizar : (+)suma ,(-)resta ,(*)multiplicacion ,(/)division ,(%)residuo ,(~)raiz_cuadrada  : "; cin >> opcion;
	if (opcion == '+'){
		cout << "Digite el primer operador :"; cin >> op1;
		cout << "Digite el segundo operador :"; cin >> op2;
		cout << op1 + op2;
	}
	else if (opcion == '-') {
		cout << "Digite el primer operador :"; cin >> op1;
		cout << "Digite el segundo operador :"; cin >> op2;
		cout << op1 - op2;
	}
	else if (opcion == '*') {
		cout << "Digite el primer operador :"; cin >> op1;
		cout << "Digite el segundo operador :"; cin >> op2;
		cout << op1 * op2;
	}
	else if (opcion == '/') {
		cout << "Digite el primer operador :"; cin >> op1;
		cout << "Digite el segundo operador :"; cin >> op2;
		if (op2 == 0) {
			cout << "No se puede divider entre 0";
		}
		else {
			cout << op1 / op2;
		}
	}
	else if (opcion == '%') {
		cout << "Digite el primer operador :"; cin >> op1;
		cout << "Digite el segundo operador :"; cin >> op2;
		cout << op1 % op2;
	}
	else if (opcion == '~') {
		cout << "Digite el operador :"; cin >> op1;
		if (op1 < 0) {
			cout << "No puede ser negativo";
		}
		else if (op1 == 0) {
			cout << "La raiz cuadrada es 0";
			}
		else {
			cout << "La raiz cuadrada es : " << sqrt(op1);
		}
	
	}
	return 0;
}
