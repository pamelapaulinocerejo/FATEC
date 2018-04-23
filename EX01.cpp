#include<iostream>
#include<locale.h>

using namespace std;

main(){
	float v[100];
	float p[9];
	
	setlocale(LC_ALL,"Portuguese");
	
	for(int i=0;i<9;i++){
		cout << "Digite um número: ";
		cin >> v[i];
		if(v[i] == 64){
			p[i] = v[i];	
		}
	}
	cout << "Posição do vetor com valor 64: ";
	for(int j=0; j<9;j++){
		cout << p[];
	}
	return 0;
}
