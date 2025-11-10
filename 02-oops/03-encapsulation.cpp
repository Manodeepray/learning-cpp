#include <iostream>

using namespace std;

//serve as model for employee
class Employee{
	private:

    // encapsulated
		string Name;
		string Company;
		int Age;
    


    public:

        void setName(string name){
            Name = name;
        }

        string getName(){
            return Name;
        }

        void setCompany(string company){
            Company = company;
        }

        string getCompany(){
            return Company;
        }
        void setAge(int age){
            Age = age;
        }

        int getAge(){
            return Age;
        }

        

    
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
    emp1.IntoduceYourself();
    
    
    Employee emp2 = Employee("RIck" , "amazon" , 25);
    emp2.IntoduceYourself();



    emp1.setAge(23);
    emp1.setCompany("NINTENDO");

    emp2.setAge(26);
    emp2.setCompany("MINSTRAL");


    emp1.IntoduceYourself();
    emp2.IntoduceYourself();
	return 0;


}
 
