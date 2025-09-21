#include<iostream>
#include<string>
using namespace std;

class student_details{
    private:
        string name;
        int roll_no;
        float OOP,DAA,LA,FDE,CT;
        void greet(){
            cout<<"Good morning!"<<endl;
        }
    public:
        void set_value(string nm, int rn, float CS201, float CS202, float MATH201, float CS203, float IDC201){
            name=nm;
            roll_no=rn;
            OOP=CS201;
            DAA=CS202;
            LA=MATH201;
            FDE=CS203;
            CT=IDC201;
        }
        void get_value(){
            cout<<"Name: "<<name<<" Roll No: "<<roll_no<<endl;
            cout<<"OOP: "<<OOP<<" DAA: "<<DAA<<" LA: "<<LA<<" FDE: "<<FDE<<" CT: "<<CT<<endl;
            cout<<"Average: "<<(OOP+DAA+LA+FDE+CT)/5<<endl;
        }
        void greetpublic(){
            greet();
        }
};

int main(){
    student_details s1;
    
    string name;
    int roll_no;
    float OOP,DAA,LA,FDE,CT;
    cout<<"Enter name, roll no and marks in OOP, DAA, LA, FDE, CT: ";
    cin>>name>>roll_no>>OOP>>DAA>>LA>>FDE>>CT;
    s1.set_value(name,roll_no,OOP,DAA,LA,FDE,CT);
    s1.get_value();
    s1.greetpublic();    

    return 0;
}
