#include <iostream>
#include <istream>

using namespace std;

int main() {		
	int i = 1;
	int f = 0;
	
	for(i = 51; i > 0; i--){
		
		if(i%2 == 0){
			
			f = f + i;
			
			cout << " | " << i << " | ";
		}
	}
	cout << " | SOMA | " << f << " | ";
}
