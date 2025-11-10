
//nested scope 
#include <iostream>

using namespace std;

//int reused = 42;
//int i = 42;



int main(){
	//int uniq = 0;

	//cout << reused << " " << uniq << endl;

	//int reused = 0;

	//cout << reused << " " << uniq << endl;

	//cout << ::reused << " " << uniq << endl;
		
	//EX 2.2.4
	//2.13
	//
	
	//int i = 100;
	//int j = i ;
	//cout << j << endl;

	//2.14
	//
	int i = 100 , sum = 0;

	for(int i = 0 ; i != 10 ; ++i){
		sum +=i;
		cout << i << endl;

	}

	cout << i << " " << sum << endl;


	return 0;


}
