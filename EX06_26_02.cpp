//06) Escreva um programa que leia duas vari�veis inteiras e troque o conte�do entre elas

#include<iostream>
#include<locale.h>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, n;
	
	cout << "Digite o 1� n�mero: ";
	cin >> n1;
	cout << "Digite o 2� n�mero: ";
	cin >> n2;
	
	n = n1;
	n1 = n2;
	
	cout << "\n";
	cout << "=-=-= INVERTENDO OS VALORES =-=-= " << endl;
	cout << "1�: " << n1 << endl;
	cout << "2�: " << n;
	
	return 0;
}
