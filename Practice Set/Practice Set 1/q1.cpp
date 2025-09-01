#include<iostream>
using namespace std;

int main(){
    int age;
    char name[100];
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your age: ";
    cin>>age;

    cout<<"Hello "<<name<<", you are "<<age<<" years old.";
    return 0;
}