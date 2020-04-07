
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	string nombre;
	string hobby;
	int edad;
	int numero;
	char direccion[10];



	cout << "Hola" << nombre << ", Cual es su nombre ? "; cin >> nombre;
	cout << "cual es su edad ?"  ; cin >> edad;
	cout << "Cual es su hobby ?"; cin >> hobby;
	cout << "Cual es su numero ?"; cin >> numero;
	cout << "Cual es su direccion?"; cin >> direccion;
	cout << "Gracias";
	return 0;
}




#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	float n1, n2;
	float suma = 0;
	float resta = 0;
	float multiplicacion = 0;
	float division = 0;

	float  raizcuadrada1= 0;
	float  raizcuadrada2 = 0;


	cout << "Digite el primer numero :"; cin >> n1;
	cout << "Digite el segundo numero :"; cin >> n2;


	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	division = n1 / n2;
	raizcuadrada1 = (sqrt(n1));
	raizcuadrada2 = (sqrt(n2));

	cout << "la suma es : " << suma << endl;
	cout << "la resta es :" << resta << endl;
	cout << "la multiplicacion es :" << multiplicacion << endl;
	cout << "la division es :" << division << endl;
	cout << "la raiz cuadrada de " <<  n1 << " es : " << raizcuadrada1 << endl;
	cout << "la raiz cuadrada de " <<  n2 << " es : " << raizcuadrada2 << endl;

	return 0;
}






#include <iostream>

using namespace std;

int main()
{
	float r,areacirculo = 0;
	float pi, lado, areacuadrado = 0;
	float base, h, areatriangulo = 0;

	cout << "Digite el valor del radio :"; cin >> r;
	cout << "Digite el valor del pi :"; cin >> pi;
	cout << "Digite el valor del lado :"; cin >> lado;
	cout << "Digite el valor de la base :"; cin >> base;
	cout << "Digite el valor de la altura :"; cin >> h;
	areacirculo = (pi) * (pow(r, 2));
	areacuadrado = (pow(lado, 2));
	areatriangulo = (base * h) / (2);
	cout << "El area del circulo es : " << areacirculo << endl;
	cout << "El area del cuadrado es : " << areacuadrado << endl;
	cout << "El area del triangulo es : " << areatriangulo << endl;
	return 0;



}
