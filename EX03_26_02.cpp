//03) Faça um programa que calcule a área de um círculo. Sabe-se que Área =  pi *R² .

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
	cout << "A área do círculo: " << ("%.2f", a) <<"cm²";
	return 0;
}
