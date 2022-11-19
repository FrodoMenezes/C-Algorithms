#include <iostream>

using namespace std;

int main() {
	int num, menor, maior;
		
	for(int i = 0; i < 5; i++){
       cout << "Digite um valor: ";
       cin >> num;
       
       if(i == 0){
    		menor = num;
			maior = num;	
	   }
       
       if(num < menor){
			menor = num;
	   }
	   
	   if(num > maior){
	   		maior = num;
	   }
	   
	}
	
	cout << "menor " << menor << endl;
	cout << "maior " << maior << endl;
	
	return 0;
}
