//05) Fa�a um programa que resolva uma equa��o do segundo grau. Escreva qual o tipo de raiz

#include<iostream>
#include<locale.h>
#include<cmath>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	int a, b, c, d, x1, x2;
	
	cout << "Digite o valor do coeficiente a: ";
	cin >> a;
	cout << "Digite o valor do coeficiente b: ";
	cin >> b;
	cout << "Digite o valor do coeficiente c: ";
	cin >> c;
	
	d = (b*b) - (4 * a* c);
	x1 = (-b + sqrt(d))/(2*a);
	x2 = (-b - sqrt(d))/(2*a);
	
	cout << "\n";
	if (c<0){
		cout << "Equa��o 2� grau: " << a << "x� + "<< b <<"x" << c << " = 0" << endl;
	}
	else{
		cout << "Equa��o 2� grau: " << a << "x� + "<< b <<"x + " << c << " = 0" << endl; 
	}
	
	cout << "Valor do Delta: " << d << endl;
	cout << "Valor do Delta Positivo: " << x1 << endl;
	cout << "Valor do Delta Negativo: " << x2 << endl;
	
	return 0;
}
