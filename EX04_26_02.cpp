/*04) Fa�a um programa que receba um n�mero positivo e maior que zero, calcule e mostre:
O n�mero digitado ao quadrado.
O n�mero digitado ao cubo.
A raiz quadrada do n�mero digitado.*/

#include<iostream>
#include<locale.h>
#include<cmath>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	float q, c, rq;
	
	
	cout << "Digite um n�mero positivo: ";
	cin >> n;
	cout << "\n";
	
	q = n*n;
	c = n*n*n;
	rq = sqrt(n);
	
	cout << "O n�mero digitado ao quadrado: " << q << endl;
	cout << "O n�mero digitado ao cubo: " << c << endl;
	cout << "Raiz quadrada do n�mero digitado: " << rq << endl;
	
	return 0;
}
