#include <iostream>
#include <string>

using namespace std;

int main() {
	
	
	string zdanie;
	cout<<"Podaj zdanie: "<<endl;
	getline(cin, zdanie);
	
	
	for(int i = 0; i<zdanie.length()/2; i++){
		
		if(zdanie[i]!=zdanie[zdanie.length()-1-i]){
			
			cout<<"Nie jest"<<endl;
			exit(0);
			
		}
	}
		
		cout<<"Jest";
		

	
		
		
		

	
	return 0;
}
