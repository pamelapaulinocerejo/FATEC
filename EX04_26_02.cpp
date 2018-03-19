/*04) Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
O número digitado ao quadrado.
O número digitado ao cubo.
A raiz quadrada do número digitado.*/

#include<iostream>
#include<locale.h>
#include<cmath>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	float q, c, rq;
	
	
	cout << "Digite um número positivo: ";
	cin >> n;
	cout << "\n";
	
	q = n*n;
	c = n*n*n;
	rq = sqrt(n);
	
	cout << "O número digitado ao quadrado: " << q << endl;
	cout << "O número digitado ao cubo: " << c << endl;
	cout << "Raiz quadrada do número digitado: " << rq << endl;
	
	return 0;
}
