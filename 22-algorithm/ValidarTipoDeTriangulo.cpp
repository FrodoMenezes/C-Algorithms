#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int a, b, c;
	
	cout << "Digite os 3 lados do triangulo" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	
	if(a < b + c && b < a + c && c < a + b)
	{		
		if(a == b && b == c)
		{
			cout << "Equilatero" << endl;
		}
		else
		{
			if(a == b || a == c || b == c)
			{
			cout << "Isosceles" << endl;
			}
			else
			{
				if(a != b && b != c)
				{
				cout << "Escaleno" << endl;	
				}
			}
		}	
	}
	else
	{
	cout << "valores invalidos, nao eh triangulo" << endl;		
	}
	
			
	return 0;
}
