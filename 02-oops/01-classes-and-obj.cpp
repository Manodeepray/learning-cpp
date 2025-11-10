#include <iostream>

using namespace std;

//serve as model for employee
class Employee{
	public:
		string Name;
		string Company;
		int Age;

		void IntoduceYourself(){
			cout <<" \n Name : "<<Name  << endl;
			cout <<" \n Company : "<<Company<< endl;
			cout <<" \n Age : "<<Age  << endl;
		}
};


int main(){
		
	Employee emp1;

	emp1.Name = "Manodeep";
	emp1.Company = "TCS Research";
	emp1.Age = 21;

	emp1.IntoduceYourself();
	return 0;


}
