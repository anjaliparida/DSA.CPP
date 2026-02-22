#include <iostream>
#include <string>
using namespace std;
class student
{
public:
    string name;
    // double cgpa; now we going to use dyanamic memory allocation the concept of heap
    double *cgpaPtr;

    student(string name, double cgpa)//parametrized constructor
    { // constructor
        this->name = name;
        cgpaPtr = new double;// new double indicate the new heap or temporary
        *cgpaPtr = cgpa;
    }
    student(student &obj){// making our new copy constructor
         this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
        //here due to swallow s1 value get change so we use dynamic memoery allocation so in deep copy we make a another pointer for s2 whichfirst have 9.78 (including s1 is there somewhere of 9.78 ) then after it change the value
        // s2 using another address and s1 have another
    }
    ~student(){
        cout<<"hii i am destructor and i delete everthing"<<endl;
        delete cgpaPtr;// to save from memory leak
    }
    void getinfo()
    {
        cout << "name=" << name << endl;
        cout << "cgpa = " << *cgpaPtr << endl;
    }
};
int main()
{
    student s1("anjali", 9.78);
    student s2(s1);
    s1.getinfo();

    *(s2.cgpaPtr) = 10;
    s1.getinfo();
     // as we only change the cgpa of only s2 but s1 get change due to swallow copy costructor thats the main problem of heap or dynamic memmory allocation
    s2.name="avi";
     s2.getinfo();
     student s3(s2);
     s3.getinfo();
    return 0;
}