#include <iostream>
#include <istream>

using namespace std;

int main() {		
	int num = 1;

	while(num != 0){
		cin >> num;
		if(num < 0){
			cout << " Negativo" << endl;
		}else{
			cout << " Positivo" << endl;
		}
	}	
	cout << " Programa encerrado";
}
