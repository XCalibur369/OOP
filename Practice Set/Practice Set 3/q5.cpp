#include<iostream>
using namespace std;

class Employee{
    private:
        int id_no;
        int salary;
    public:
        void set_value(int id, int sal){
            id_no=id;
            salary=sal;
        }
        void get_value(){
            cout<<"ID No.: "<<id_no<<endl<<"Salary: "<<salary;
        }
};

int main(){
    Employee e1;
    Employee e2;
    Employee e3;

    int id,sal;
    cout<<"Enter ID No. and Salary: ";
    cin>>id>>sal;
    e1.set_value(id,sal);
    e1.get_value();
    cout<<endl<<"Enter ID No. and Salary: ";
    cin>>id>>sal;
    e2.set_value(id,sal);
    e2.get_value();
    cout<<endl<<"Enter ID No. and Salary: ";
    cin>>id>>sal;
    e3.set_value(id,sal);
    e3.get_value();
    return 0;
}