#include<iostream>
#include<string>
using namespace std;

class details{
    private:
        int roll_no;
        float marks;
        string name;
    public:
        void set_value(int rn, float mr, string nm){
            roll_no=rn;
            marks=mr;
            name=nm;
        }
        void get_value(){
            cout<<"Name: "<<name<<" Roll No: "<<roll_no<<" Marks: "<<marks;
        }
};

int main(){
    details d1;
    //d1.name="Sai";
    //d1.marks=99.98;
    //d1.roll_no=86;
    //cout<<"Name: "<<d1.name<<" Roll No: "<<d1.roll_no<<" Marks: "<<d1.marks;
    d1.set_value(86,99.98,"Sai");
    d1.get_value();
    return 0;
}