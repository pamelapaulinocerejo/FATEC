#include<iostream>
#include<locale.h>

using namespace std; 

main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2;
	cout << "Digite um n�mero: ";
	cin >> n1;
	cout << "Digite outro n�mero: ";
	cin >> n2;
	if(n1>n2){
		cout << n1 << " > " << n2;
	}else{
		cout << n2 << " > " << n1;
	}
	return 0;
}
