#include <iostream>

using namespace std;

int main() {
	
	int num, res;
	
	cout << "Digite um n�mero: " << endl;
    cin >> num;
    
	if(num % 2 == 0){
		cout << "PAR! " << endl;
	}else{
		cout << "IMPAR! " << endl;
	}
	

	return 0;
}
