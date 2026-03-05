#include <iostream>
#include <string>
using namespace std;
class teacher{

    //propertise/attribute

    private: //access modifier mentioning
    double salary;

    public:
    string name;
    string subject;
    int age;

    //methods/member function

    void changeDept(string newDept){
        //using this so that if the teacher change the department, so she can
       subject=newDept;
    }

    //setter: setting private value
    void setSalary(double s){
        salary = s;
    }

    //getter: gets the value of private value
    double getSalary(){
        return salary;
    }
};

class student{
    public:
    string name;
    int id;
};

int main() {

teacher t1;

t1.name="Muna";
t1.subject="CSE";
t1.age= 25;
t1.setSalary(25000);

cout<<t1.name<<endl;
cout<<t1.getSalary()<<endl;

teacher t2;

t2.name="Kamal";
t2.subject="BBA";
t2.age=30;
    return 0;
}
