//03) Fa�a um programa que calcule a �rea de um c�rculo. Sabe-se que �rea =  pi *R� .

#include<iostream>
#include<locale.h>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	float r,a;
	
	cout << "Digite o valor do raio: ";
	cin >> r;
	a = 3.14 * (r * r);
	std::cout.precision(4);
	cout << "A �rea do c�rculo: " << ("%.2f", a) <<"cm�";
	return 0;
}
