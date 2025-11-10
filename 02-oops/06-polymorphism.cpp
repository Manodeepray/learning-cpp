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
    

// makes sure that the Work() is the most derieved one for the instance ... 
// for exmaple e* = t ...therefore e->work()=t.work()... 
// if t does not have work().. then the function remains same
      

        virtual  void Work(){
            cout << getName() << " is checking Email . task backlogs " << endl;
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


        void Work(){
            cout << getName() << " is writing "<< getLang()<<" code" << endl;
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

        void Work(){
            cout << getName() << " is teaching "<< Subject<<" lesson" << endl;
        }
};

int main(){


    // the most commmon use of polymorphism is when a parent class reference is used to refer to a child class object.
    



    Developer d = Developer("clark" , "stripe" , 22 , "python");
    Teacher t = Teacher("jack" , "Kv" , 33 , "maths");

    // d.Work();
    // t.Work();

    Employee* e1 = &d;
    // holds the recernce to a derieved class
  
    Employee* e2 = &t;

    e1-> Work();
    e2-> Work();



  	return 0;
  

}
 
