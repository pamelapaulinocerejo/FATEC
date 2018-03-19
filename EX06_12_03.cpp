//06) Escreva um programa para ler um número e determinar se ele é maior, igual ou menor que zero

#include<iostream>
#include<locale.h>

using namespace std;

main(){
	int num;
	setlocale(LC_ALL, "Portuguese");
	cout << "Digite um número: ";
	cin >> num;
	if(num<0){
		cout << "O número " << num << " é MENOR que 0";
	}
	if(num>0){
		cout << "O número " << num << " é MAIOR que 0";
	}
	if(num==0){
		cout << "O número " << num << " é IGUAL a 0";
	}
	return 0;
}
