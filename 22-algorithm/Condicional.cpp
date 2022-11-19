#include <iostream>

using namespace std;

int main() {

	float s;
	
	cout << "Digite um numero negativo ou positivo: ";
	cin >> s;
	
	if(s < 0)
	{
		cout << "Este numero eh negativo!";
	}
	else
	{
		cout << "Este numero eh positivo!";	
	}
	
	return 0;
}
