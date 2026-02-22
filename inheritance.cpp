#include <iostream>
#include <string>
using namespace std;

class person
{
public:
    string name;
    int age;
    person(){//making constructor by own 
        cout<< "parent constructor"<<endl;
    }
};
class student : public person
// inheritance for parent class 
{
public:
    int rollno; 
    student(){
        cout<< " child constructor"<<endl;
    }

    void getinfo(){
        cout << "name" << name << endl;
        cout << "age" << age << endl;
        cout << "rollno" << rollno << endl;
    
        
    


}
};
int main(){
    student s1;
    s1.name="anjali";
     s1.age= 18;
      s1.rollno=437010;


    s1.getinfo();

}



//if in case we need to use parameterised constructor then on line 19
//student (string name, int age, int roll no):person(name age){
  //  this->rollno=rollno;
//}
