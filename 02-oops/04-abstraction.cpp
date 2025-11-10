#include <iostream>

using namespace std;

//serve as model for employee


class AbstractEmployee{
    virtual void AskForPromotion()=0;
    
};








class Employee:AbstractEmployee{
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

        void AskForPromotion(){

            if (Age>30)
                cout <<  "YES , "<< Name << " can be promoted"<<endl;
            else
                cout <<  "NO , " << Name << " can't be promoted"<<endl;
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
    
    
    Employee emp2 = Employee("RIck" , "amazon" , 31);
    emp2.IntoduceYourself();

    emp1.AskForPromotion();
    emp2.AskForPromotion();

	return 0;


}
 
