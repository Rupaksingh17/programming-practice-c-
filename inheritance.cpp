#include <iostream>
using namespace std;
 class Person{
    int id;
    char name[100];

    public:
    void set_p()
    {
        cout<<"enter the id";
        cin>>id;
        cout<<"enter the name";
        cin>>name;
    }

    void display_p()
    {
        cout <<endl<<"ID"<<"\nName:"<<name<<endl;

    }
 };

 class Student : private Person{
    char course[50];
    int fee;

 public:

 void set_s()
 {
    set_p();
    cout<<"enter the course";
    cin>>course;
    cout<<"enter the fee";
    cin>>fee;

 }
 void display_s()
 {
    display_p();
    cout<<"course:"<<course<<"\nFee:"<<fee<<endl;

 }
 };
 int main()
 {
    Student s;
    s.set_s();
    s.display_s();

    return 0;
 }