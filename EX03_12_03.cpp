#include<iostream>
#include<locale.h>

using namespace std; 

main(){
	setlocale(LC_ALL, "Portuguese");
	float x, y, z;
	cout << "Digite o valor do primeiro lado do tri�ngulo: ";
	cin >> x;
	cout << "Digite o valor do segundo lado do tri�ngulo: ";
	cin >> y;
	cout << "Digite o valor do terceiro lado do tri�ngulo: ";
	cin >> z;
	if((x+y<z) || (y+z<x) || (x+z<y)){
		cout << "N�O � poss�vel formar um tri�ngulo";
	}else{
		if((x==y) && (z==y)){
			cout << "Tri�ngulo EQUIL�TERO";
		}
		if((x==y) && (y!=z)|| (x==z) && (z!=y) || (y==z) && (z!=x) || (y==x) && (x!=z)){
			cout << "Tri�ngulo IS�SCELES";
		}
		if((z!=y) && (y!=x) && (x!=z)){
			cout << "Tri�ngulo ESCALENO";
		}
	}
	return 0;
}

