#include <iostream>
#include <string>
using namespace std;
class Teacher
{
    // pehle properties baatate he fir methods
    // PROPERTIES(qualities)
private:
    double salary; // sensitive information is hiding not allowiing other to access it
    // also known as data hiding

public://acess to everyone outside the class
Teacher()// non parameterized( no parameter)
{
    cout<< "hii ,I am a constructor"<<endl;
    // it is used to set a value suppose cse for all teacher then we dont need to set again and again
    dept = "cse";

}
Teacher(string name,string s, double k)//parameteriesed
{
   // name=n;(below here we used this operation to know this constructor)
   this->name=name;//after using this we dont need to use again any other variable

    subject =s;
    salary = k; 

}
//copy constructor making
//( Teacher (Teacher &orgobj){   this-> name=obj.org.name; ....} this is actually custom copy constructor

   string name;
   string dept;
   string subject;

    // METHODS also known as member function to classify behaviour of class as we were using setter and getter 
    
    void changedept(string newdept)
    {
        dept = newdept;
    }
    // setter ( set salary set the value of salary while get salary to  getvalue of salary)
    // as salary is private so we use indirectly to know the value 
    void setsalary(double s)
    {
        salary = s;
    }
    double getsalary()
    {
        return salary;
    }
    void getinfo(){
        cout<< "name="<<name<< endl;
        cout<< "subject = "<<subject<<endl;
        cout<<"dept = "<< dept <<endl;// no value is assign as onlu constructor type works
        cout << "salary= "<< salary <<endl;
    }
};
int main()
{
   //Teacher t1; // constructor complier already install it
   // t1.name = "Anjali";
   // t1.subject = "math";
    // t1.dept="cse"(we already use constructor so we dont need to use this again )
    //cout << "name of t1"<< t1.name<<endl;
    // cout << t1.salary<<endl;(as its already private member so we use setter)


    //t1.setsalary(2000.00);
   // cout << t1.getsalary() << endl;
   // cout<< t1.dept<< endl;
   Teacher t1("ANJALI","math",2000.00);//here we use parametrised constructor
  // cout<< t1.name<< endl;
  t1.getinfo();
  Teacher t2(t1);// default copy constructor (cc)is called or invoke(cc is constructor which copy one to another)
  t2.getinfo();

    return 0;
}
