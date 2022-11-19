#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	int i, num, negativos;
	for(i=0; i<20; i++){
		cin >> num;
		
		if(num < 0){
			negativos++;
		}
	}
	
	cout << "Total de negativos: " << negativos << endl;
	return 0;
}

