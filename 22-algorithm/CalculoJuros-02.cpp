#include <iostream>

using namespace std;

int main() {

	float tax, prod, vParcela, total;
	int num;	
	char code;
	
	cout << "insira o valor do produto: ";
	cin >> prod;
	cout << "insira A para � vista ou P para parcelado: ";
	cin >> code;
	
	switch(code){
		case 'P':
			cout << "Insira o numero de vezes: ";
			cin >> num;
			break;
		case 'p':
			cout << "Insira o numero de vezes: ";
			cin >> num;
			break;
		case 'A':
			cout << "Insira o numero de vezes: ";
			cin >> num;
			break;
		case 'a':
			cout << "� vista!";
			tax = prod - (prod * 0.025);
			break;
		default:
			abort() ;
	}
	
	switch(num){
		case 2 ... 5:
			tax = prod;
			break;
		case 6 ... 10:
			tax = prod + (prod * 0.06);
			break;
		case 11 ... 15:
			tax = prod + (prod * 0.13);
			break;
		default:
			cout << "Invalido";
	}
	
	vParcela = tax / num;
	cout << "VALOR TOTAL: R$ " << tax << endl;
	cout << "PRA�O DE TABELA: R$ " << prod << endl;
	cout << "NUM. DE VEZES: " << num << endl;
	cout << "VALOR DE CADA PARCELA: R$ " << vParcela << endl;
}
