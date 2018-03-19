/*05) Escreva um programa para calcular e exibir a média ponderada de 2 notas dadas. A
primeira nota tem peso 6 e a segunda nota tem peso 4.*/

#include<iostream>
#include<locale.h>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, m;
	
	cout << "Digite a 1ª nota: ";
	cin >> n1;
	cout << "Digite a 2ª nota: ";
	cin >> n2;
	
	std::cout.precision(2);
	m = (0.6* n1) + (0.4*n2)/ 2;
	
	cout << "Média: " << m;
	
	return 0;
}
