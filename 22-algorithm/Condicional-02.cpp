#include <iostream>

using namespace std;

int main() {

	float s;
	
	cout << "Digite um numero negativo ou positivo: ";
	cin >> s;
	
	if(s < 0)
	{
		cout << s * -1;
	}
	else
	{
		cout << s;	
	}
	
	return 0;
}
