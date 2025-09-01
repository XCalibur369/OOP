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
            cout<<"ID No.: "<<id_no<<endl<<"Salary: "<<salary<<endl;
        }
};

int main(){
    int id,sal,times;
    cout<<"Enter the number of employees: ";
    cin>>times;

    Employee e[times];

    for(int i=0;i<times;i++){
        cout<<"Enter the ID and salary: ";
        cin>>id>>sal;
        e[i].set_value(id,sal);
    }

    for(int i=0;i<times;i++){
        e[i].get_value();
    }

    return 0;
}