/*02) Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário,
sabendo-se que este sofreu um aumento de 25%.*/

#include<iostream>
#include<locale.h>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	float sal, nsal;
	
	cout << "Digite seu salário atual: R$ ";
	cin >> sal;
	nsal = sal + (sal * 0.25);
	
	cout << "Novo salário com aumento de 25%: R$ " << nsal;
	return 0; 
}
