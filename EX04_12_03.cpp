/*04) Faça um programa que receba o código correspondente ao cargo de um funcionário e o
seu salário atual e, mostre o cargo, o valor do aumento e seu novo salário. Os cargos são
dados na tabela a seguir. Utilize switch.

1  - Escriturário  - 50%
2  - Secretário  - 35%
3  - Caixa  - 20%
4  - Gerente  - 10%
5  - Diretor  - 0% */


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
