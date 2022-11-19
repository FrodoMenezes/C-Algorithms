#include <iostream>

using namespace std;

int main() {

	int idade;
	float peso;
	
	cout << "Inserir idade: ";
	cin >> idade;
	cout << "Inserir peso: ";
	cin >> peso;
	
	if(idade <= 12){
		cout << "Infantil";
	}else if(idade <= 16 && peso <= 40){
		cout << "Juvenil Leve";
	}else if(idade <= 16 && peso > 40){
		cout << "Juvenil Pesado";
	}else if(idade <= 24 && peso <= 45){
		cout << "Senior leve";
	}else if(idade <= 24 && peso <= 60){
		cout << "Senior medio";
	}else if(idade <= 24 && peso > 60){
		cout << "Senior pesado";
	}else if(idade > 24){
		cout << "Veterano";
	}
}
