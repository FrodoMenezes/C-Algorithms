#include <iostream>

using namespace std;


int main() {	
	
	int code;
	
	cout << "Digite o codigo: " << endl;
	cin >> code;
	
	switch(code){
		case 1:
			cout << "Sul" << endl;
			break;
			
		case 2:
			cout << "Norte" << endl;
			break;
			
		case 3:
			cout << "Leste" << endl;
			break;
			
		case 4:
			cout << "Oeste" << endl;
			break;
			
		case 5 ... 6:
			cout << "Nordeste" << endl;
			break;
			
		case 7 ... 9:
			cout << "Sudeste" << endl;
			break;
			
		case 10 ... 20:
			cout << "Centro-Oeste" << endl;
			break;
			
		case 25 ... 50:
			cout << "Nordeste" << endl;
			break;
			
		default:
			cout << "Importado" << endl;
			break;
	}
	
	return 0;
}
