//06) Escreva um programa para ler um n�mero e determinar se ele � maior, igual ou menor que zero

#include<iostream>
#include<locale.h>

using namespace std;

main(){
	int num;
	setlocale(LC_ALL, "Portuguese");
	cout << "Digite um n�mero: ";
	cin >> num;
	if(num<0){
		cout << "O n�mero " << num << " � MENOR que 0";
	}
	if(num>0){
		cout << "O n�mero " << num << " � MAIOR que 0";
	}
	if(num==0){
		cout << "O n�mero " << num << " � IGUAL a 0";
	}
	return 0;
}
