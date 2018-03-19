#include<iostream>
#include<locale.h>

using namespace std; 

main(){
	setlocale(LC_ALL, "Portuguese");
	int cod;
	float sal, nsal;
	cout << "Digite o código do funcionário: ";
	cin >> cod;
	cout << "Digite o salário atual do funcionário: R$ ";
	cin >> sal;
	switch(cod){
		case 1:
			cout << "Cargo: Escriturário" <<endl;
			nsal = sal + (sal*0.5);
			cout << "Você tem direito a um aumento de 50%" << endl;
			cout << "Novo salário: R$" << nsal << endl;
			break;
			
		case 2:
			cout << "Cargo: Secretário" <<endl;
			nsal = sal + (sal*0.35);
			cout << "Você tem direito a um aumento de 35%" << endl;
			cout << "Novo salário: R$" << nsal <<endl;
			break;
			
		case 3:
			cout << "Cargo: Caixa" << endl;
			nsal = sal + (sal*0.2);
			cout << "Você tem direito a um aumento de 20%" << endl;
			cout << "Novo salário: R$ " << nsal << endl;
			break;
			
		case 4: 
			cout << "Cargo: Gerente" << endl;
			nsal = sal + (sal*0.1);
			cout << "Você tem direito a um aumento de 10%" << endl;
			cout << "Novo salário: R$ " << nsal << endl;
			break;
			
		default:
			cout << "Cargo: Diretor" <<endl;
			cout << "Você NÃO tem direito a um aumento" << endl;
			break;
	
	return 0;
}
