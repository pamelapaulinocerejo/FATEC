#include<iostream>
#include<locale.h>

using namespace std; 

main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	
	cout << "Digite um n�mero: ";
	cin >> n;
	if(n%2==0){
		cout << "O n�mero digitado � PAR";
	}else{
		cout << "O n�mero digitado � IMPAR";
	}
	return 0;
}
