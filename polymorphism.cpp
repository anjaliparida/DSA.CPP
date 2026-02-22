#include <iostream>
#include <string>
using namespace std;

class student // for constructor overloading
{
    public:
    string name;

    student(){
        cout<<"non parameterized\n";
    }
    student(string name){
        this->name= name;
        cout<< "name : "<< name << endl;
         cout<<" parameterized\n";

    }
};
 class print{ // for function overloading 
    public:
    void shows(int x){
        cout << "int: "<< x<< endl;

    }
    void shows(char ch){
        cout << "char: "<< ch<< endl;
    }

 };


int main(){

//student s1;// as we use non parameterized one it also give out the same one
student s1("anjali");// we use parameterized
// depending on the context parameterized or non parmeterized called its a case of constructor overloading
   print p1;
   p1.shows(100);
    return 0;
}