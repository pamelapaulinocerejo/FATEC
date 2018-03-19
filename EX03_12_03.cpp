#include<iostream>
#include<locale.h>

using namespace std; 

main(){
	setlocale(LC_ALL, "Portuguese");
	float x, y, z;
	cout << "Digite o valor do primeiro lado do triângulo: ";
	cin >> x;
	cout << "Digite o valor do segundo lado do triângulo: ";
	cin >> y;
	cout << "Digite o valor do terceiro lado do triângulo: ";
	cin >> z;
	if((x+y<z) || (y+z<x) || (x+z<y)){
		cout << "NÃO é possível formar um triângulo";
	}else{
		if((x==y) && (z==y)){
			cout << "Triângulo EQUILÁTERO";
		}
		if((x==y) && (y!=z)|| (x==z) && (z!=y) || (y==z) && (z!=x) || (y==x) && (x!=z)){
			cout << "Triângulo ISÓSCELES";
		}
		if((z!=y) && (y!=x) && (x!=z)){
			cout << "Triângulo ESCALENO";
		}
	}
	return 0;
}

