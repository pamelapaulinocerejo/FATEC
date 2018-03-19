//02) Escreva um programa que leia dois números e exiba-os em ordem crescente.

#include<iostream>
#include<locale.h>

using namespace std; 

main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2;
	cout << "Digite um número: ";
	cin >> n1;
	cout << "Digite outro número: ";
	cin >> n2;
	if(n1>n2){
		cout << n1 << " > " << n2;
	}else{
		cout << n2 << " > " << n1;
	}
	return 0;
}
