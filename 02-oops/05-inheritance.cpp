#include <iostream>

using namespace std;

//serve as model for employee


class AbstractEmployee{
    virtual void AskForPromotion()=0;
    
};








class Employee:AbstractEmployee{
	private:

    // encapsulated
		string Company;
		int Age;
    protected:
    		string Name;



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

class Developer:public Employee {

    public:
        string FavProglanguage;

        Developer(string name,string company,int age , string lang)
        :Employee(name , company ,age)
        {
        
            FavProglanguage = lang;

        }

        string getLang(){
            return FavProglanguage;
        }


        void FixBug(){

            cout<< Name<<" fixed bug using "<< getLang()<<endl;
        }


};



class Teacher : public Employee{

    public:
        string Subject;


        Teacher(string name,string company,int age , string sub)
        :Employee(name , company ,age){
            Subject = sub;
        }



        void PrepareLesson(){
            cout << Name << " is Preparing " << Subject << " Lesson"<< endl;
        }
    
};

int main(){
		
	Employee emp1 = Employee("manodeep" , "TCS" , 22);
    Employee emp2 = Employee("RIck" , "amazon" , 31);
    
    Developer dev1 = Developer("clark" , "stripe" , 22 , "python");


    Teacher t = Teacher("jack" , "Kv" , 33 , "maths");

    t.PrepareLesson();
    t.AskForPromotion();
	return 0;


}
 
