#include <iostream>

using namespace std;

int main() {

	char anyWord;
	
	cout << "Digite uma letra para cada fun��o: " << endl;
	cout << "/-----------------------------------/" << endl;
	cout << "Letra (I) ----------------- Inclus�o" << endl;
	cout <<  "Letra (A) ---------------- Altera��o" << endl;
	cout << "Letra (T) ------------------ Termino" << endl;
	cin >> anyWord;
	
	switch(anyWord) {
      	case 'I' :
         	cout << "Inclusao" << endl; 
        	break;
      	case 'i' :
		 	cout << "inclusao" << endl; 
			break;
      	case 'A' :
      		cout << "Alteracao" << endl;
      		break;
		case 'a' :
      		cout << "alteracao" << endl;
      		break;
      	case 'T' :
      		cout << "Termino" << endl;
      		break;	
		case 't' :
         	cout << "termino" << endl;
         	break;
		default :
			cout << "Opcao incorreta amigo >:(" << endl;
   }
}
