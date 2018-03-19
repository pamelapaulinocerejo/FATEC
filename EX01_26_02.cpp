//01) Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.

#include<iostream>
#include<locale.h>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, n3, n4, t;
	
	cout << "Digite o 1º número: ";
	cin >> n1;
	cout << "Digite o 2º número: ";
	cin >> n2;
	cout << "Digite o 3º número: ";
	cin >> n3;
	cout << "Digite o 4º número: ";
	cin >> n4;
	t = n1 + n2 + n3 + n4;
	
	cout << "\n";
	cout << "A soma entre os valores digitados é igual a " << t;
	return 0;
}
