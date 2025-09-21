#include<iostream>
#include<string>
using namespace std;
//base class 
class university{
    private:
        string name;
        int id;
    public:
        university(string name,int id){
            this->id=id;
            this->name=name;
            cout<<"A new member has been created"<<endl<<name<<" "<<id<<endl;
        }
        void get_details(){
            cout<<"Name: "<<name<<" ID: "<<id<<endl;
        }
};
//name of derived class : access specifier base class
class students:public university{
    private:
        string school;
    public:
        students(string name,int id,string school):university(name,id){
            this->school=school;
        }
        void get_student_details(void){
            get_details();
            cout<<"School: "<<school<<endl;
        }
};

int main(){
    university u1("Abhinav",1701);
    u1.get_details();
    students s1("Abhi",1518,"SCDS");
    s1.get_student_details();
    return 0;
}