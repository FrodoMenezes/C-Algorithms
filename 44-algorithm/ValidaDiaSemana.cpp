#include <iostream>
#include <string>

using namespace std;

int main() {		
	string dia;
	
	cout << "Digite um dia da semana, porfavor: " << endl;
	cin >> dia;
	
	for (int i = 0; i < dia.size(); i++){
		dia[i] = toupper(dia[i]);
	}
	
	cout << dia << endl;
	
	if(dia.compare("SABADO") == 0 || dia.compare("SABADO") == 0){
		cout << "Final de semana!" << endl;
	}else{
		cout << "Dia Util!" << endl;
	}
	
	return 0;
}
