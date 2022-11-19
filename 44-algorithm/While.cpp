#include <iostream>
#include <istream>
#include <string>

using namespace std;

int main() {		
	
	int num;
	int g1=0;
	int g2=0;
	int g3=0;
	int g4=0;
	string str;
	
	while(num >= 0){
		cout << "Numeros de: " << endl;
		cout << "[0 - 25] --> " << g1 << " | [25 - 50] --> " << g2 << endl;
		cout << "[50 - 75] - " << g3 << " | [75 - 100] - " << g4 << endl;
		cout << "Digite um numero (0 - 100): " << endl;
		
		cin >> num;
		
		if(num <= 25){
			g1++;
		}else if(num <= 50){
			g2++;
		}else if(num <= 75){
			g3++;
		}else{
			g4++;
		}
		cout << " " << endl;
	}
}

