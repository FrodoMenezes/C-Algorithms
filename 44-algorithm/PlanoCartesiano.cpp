#include <iostream>
#include <istream>
#include <string>

using namespace std;

int main() {		
	
	int x=1, y;
	
	while(x != 0){
		cout << "Insira as duas coordenadas do plano cartesiano: " << endl;
		cout << "(X)" << endl;
		cin >> x;
		cout << "(Y)" << endl;
		cin >> y;
		
		if(x == 2 && y ==2){
			cout << "Primeiro quadrante" << endl;
		}
		
		if(x == 3 && y == -2){
			cout << "Quarto quadrante" << endl;	
		}
		
		if(x == -8 && y == -1){
			cout << "Terceiro quadrante" << endl;	
		}
		
		if(x == -7 && y == 1){
			cout << "Segundo quadrante" << endl;		
		}
		
		cout << " " << endl;	
		cout << "/-----------------------------/" << endl;	
		cout << " " << endl;	
	} 
}
