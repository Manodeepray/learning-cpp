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

        Employee(string name,string company,int age){

            Name = name;
            Company = company;
            Age = age;

        }

};


int main(){
		
	Employee emp1 = Employee("manodeep" , "TCS" , 22);
    Employee emp2 = Employee("RIck" , "amazon" , 25);


	emp1.IntoduceYourself();
    emp2.IntoduceYourself();
	return 0;


}
 
