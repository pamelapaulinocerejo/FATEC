#include<iostream>
#include<locale.h>

using namespace std; 

main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	
	cout << "Digite um número: ";
	cin >> n;
	if(n%2==0){
		cout << "O número digitado é PAR";
	}else{
		cout << "O número digitado é IMPAR";
	}
	return 0;
}
