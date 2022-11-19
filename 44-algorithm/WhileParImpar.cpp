#include <iostream>
#include <istream>

using namespace std;

int main() {		
	int num = 1;

	while(num > 0){
		
		cin >> num;
		
		if(num%2 == 0){
			cout << num << " PAR" << endl;
		}else{
			cout << num << " IMPAR" << endl;
		}
	}	
	cout << " NULO OU NEGATIVO ";
}
