/*02) Fa�a um programa que receba o sal�rio de um funcion�rio, calcule e mostre o novo sal�rio,
sabendo-se que este sofreu um aumento de 25%.*/

#include<iostream>
#include<locale.h>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	float sal, nsal;
	
	cout << "Digite seu sal�rio atual: R$ ";
	cin >> sal;
	nsal = sal + (sal * 0.25);
	
	cout << "Novo sal�rio com aumento de 25%: R$ " << nsal;
	return 0; 
}
