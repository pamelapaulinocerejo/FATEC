//06) Escreva um programa que leia duas variáveis inteiras e troque o conteúdo entre elas

#include<iostream>
#include<locale.h>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, n;
	
	cout << "Digite o 1º número: ";
	cin >> n1;
	cout << "Digite o 2º número: ";
	cin >> n2;
	
	n = n1;
	n1 = n2;
	
	cout << "\n";
	cout << "=-=-= INVERTENDO OS VALORES =-=-= " << endl;
	cout << "1º: " << n1 << endl;
	cout << "2º: " << n;
	
	return 0;
}
