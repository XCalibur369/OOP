#include<iostream>
using namespace std;

class Student{
    private:
        string name;
        int age;
    public:
        void set_value(string nm, int ag){
            name=nm;
            age=ag;
        }
        void get_value(){
            cout<<"Name: "<<name<<" Age: "<<age;
        }
};

int main(){
    Student s1;
    string name;
    int age;
    cout<<"Enter name and age: ";
    cin>>name>>age;
    s1.set_value(name,age);
    s1.get_value();
    return 0;
}