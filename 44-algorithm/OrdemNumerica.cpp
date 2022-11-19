#include <iostream>
#include <istream>
#include <string>

using namespace std;

int main() {		
	
	int num1, num2, maior, menor;
	
	while(num1 != num2){
		cout << "Digite dois numeros (que n�o sejam iguais): " << endl;
		cin >> num1;
		cin >> num2;
		
		if(num1 < num2){
			cout << num1 << " & " << num2 << " Estao em ordem crescente!" << endl;
		}else{
			cout << num1 << " & " << num2 << " Estao em ordem decrescente!" << endl;
		}
		
		cout << " " << endl;
	}
}
