#include<iostream>
#include<string>
using namespace std;

class details{
    public:
    int roll_no;
    float marks;
    string name;
};

int main(){
    details d1;
    d1.name="Sai";
    d1.marks=99.98;
    d1.roll_no=86;
    cout<<"Name: "<<d1.name<<" Roll No: "<<d1.roll_no<<" Marks: "<<d1.marks;
    return 0;
}