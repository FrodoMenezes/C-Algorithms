#include <iostream>

using namespace std;

int main() {	
	
	char code;
	float estudante, aposentado, ing;
	
	ing = 17.7;
	
	cout << "/---------------------------------------------------/" << endl;
	cout << "/-------------- Bem vindo ao CineTop ---------------/" << endl;
	cout << "Valor do ingresso: ------------------------ R$: 17,50" << endl;
	cout << "Digite E para: ---------------------------- Estudante" << endl;
	cout << "Digite A para: --------------------------- Aposentado" << endl;
	cout << "Digite qualqer outro caractere para nenhum dos casos!" << endl;
	
	cin >> code;
	
	switch(code){
		case 'E':
			cout << "Valor do Ingresso: "<< ing - (ing * 0.5) << endl;
			break;
			
		case 'A':
			cout << "Valor do Ingresso: R$: "<< ing - (ing * 0.3) <<endl;
			break;
		
		case 'e':
			cout << "Valor do Ingresso: "<< ing - (ing * 0.5) << endl;
			break;
			
		case 'a':
			cout << "Valor do Ingresso: R$: "<< ing - (ing * 0.3) <<endl;
			break;
				
		default:
			cout << "Valor do Ingresso: R$: 17,50... Obviamente" << endl;
			break;
	}
	
	return 0;
}
