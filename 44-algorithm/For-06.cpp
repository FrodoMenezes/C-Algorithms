#include <iostream>
#include <istream>

using namespace std;

int main() {		
	int i = 1;

	for(i = 1000; i < 1999; i++){
		if(i%11 == 5){
			cout << " | " << i << " | ";
		}
	}
}
