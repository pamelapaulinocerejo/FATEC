/*04) Fa�a um programa que receba o c�digo correspondente ao cargo de um funcion�rio e o
seu sal�rio atual e, mostre o cargo, o valor do aumento e seu novo sal�rio. Os cargos s�o
dados na tabela a seguir. Utilize switch.

1  - Escritur�rio  - 50%
2  - Secret�rio  - 35%
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
	cout << "Digite o c�digo do funcion�rio: ";
	cin >> cod;
	cout << "Digite o sal�rio atual do funcion�rio: R$ ";
	cin >> sal;
	switch(cod){
		case 1:
			cout << "Cargo: Escritur�rio" <<endl;
			nsal = sal + (sal*0.5);
			cout << "Voc� tem direito a um aumento de 50%" << endl;
			cout << "Novo sal�rio: R$" << nsal << endl;
			break;
			
		case 2:
			cout << "Cargo: Secret�rio" <<endl;
			nsal = sal + (sal*0.35);
			cout << "Voc� tem direito a um aumento de 35%" << endl;
			cout << "Novo sal�rio: R$" << nsal <<endl;
			break;
			
		case 3:
			cout << "Cargo: Caixa" << endl;
			nsal = sal + (sal*0.2);
			cout << "Voc� tem direito a um aumento de 20%" << endl;
			cout << "Novo sal�rio: R$ " << nsal << endl;
			break;
			
		case 4: 
			cout << "Cargo: Gerente" << endl;
			nsal = sal + (sal*0.1);
			cout << "Voc� tem direito a um aumento de 10%" << endl;
			cout << "Novo sal�rio: R$ " << nsal << endl;
			break;
			
		default:
			cout << "Cargo: Diretor" <<endl;
			cout << "Voc� N�O tem direito a um aumento" << endl;
			break;
	
	return 0;
}
