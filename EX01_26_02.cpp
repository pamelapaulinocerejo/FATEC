//01) Fa�a um programa que receba quatro n�meros inteiros, calcule e mostre a soma desses n�meros.

#include<iostream>
#include<locale.h>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, n3, n4, t;
	
	cout << "Digite o 1� n�mero: ";
	cin >> n1;
	cout << "Digite o 2� n�mero: ";
	cin >> n2;
	cout << "Digite o 3� n�mero: ";
	cin >> n3;
	cout << "Digite o 4� n�mero: ";
	cin >> n4;
	t = n1 + n2 + n3 + n4;
	
	cout << "\n";
	cout << "A soma entre os valores digitados � igual a " << t;
	return 0;
}
