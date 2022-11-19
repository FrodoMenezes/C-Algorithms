#include <iostream>

using namespace std;

int main() {

	int num;
	
	cout << "Digite um numero de 1 a 5: " << endl;
	cin >> num;
	
	switch(num) {
      	case 1 :
         	cout << "Um" << endl; 
        	break;
      	case 2 :
      		cout << "Dois" << endl;
      		break;
		case 3 :
         	cout << "Tres" << endl;
         	break;
      	case 4 :
         	cout << "Quatro" << endl;
         	break;
      	case 5 :
			cout << "Cinco" << endl;
			break;
		default :
			cout << "Numero incorreto >:(" << endl;
   }
}
