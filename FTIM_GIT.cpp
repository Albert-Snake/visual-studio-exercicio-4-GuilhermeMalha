#include <iostream>
#include <string>
using namespace std;

int main()
{
	int valor1;
	int valor2;
	string opcao{};

	cout << "Bem Vindo " << endl;
	cout << "Somar - S" << endl;
	cout << "Multplicar - M " << endl;
	cin >> opcao;

	if (opcao == "s" || opcao == "S") {
		int valor1;
		int valor2;
		cout << "Introduza um valor para somar: " << endl;
		cin >> valor1;
		cout << "Introduza um segundo valor para somar: " << endl;
		cin >> valor2;
		cout << "A soma: " << valor1 + valor2 << "." << endl;
	}

	if (opcao == "m" || opcao == "M") {
		int valor1;
		int valor2;
		cout << "Introduza um valor para multiplica: " << endl;
		cin >> valor1;
		cout << "Introduza um segundo valor para multiplicar: " << endl;
		cin >> valor2;
		cout << "A multiplicacao: " << valor1 * valor2 << "." << endl;
	}
	
	cout << "Adeus!" << endl;

	
}

