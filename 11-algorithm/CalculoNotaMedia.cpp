#include <iostream>

using namespace std;

int main() {
	
	float n1, n2, n3, m;
	
	cout << "Digite a primeira nota: ";
	cin >> n1;
	cout << "Digite a segunda nota: ";
	cin >> n2;
	cout << "Digite a terceira nota: ";
	cin >> n3;
	
	m = (n1 + n2 + n3) / 3;
	
	if(m >= 6)
	{
		cout << "Sua nota foi " << m << ", a media atual do colegio eh 6 " << endl;
		cout << "Parabens voce foi aprovado amigo!!";		
	}
	else
	{
		cout << "Sua nota foi " << m << ", a media atual do colegio eh 6 " << endl;
		cout << "Sinto muito voce reprovou (sad reactions)";
	}
	
	return 0;
}
