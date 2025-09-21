#include<iostream>
using namespace std;

class details{
    private:
        string name;
        string city;
        string state;
        int mark;
    public:
        void set_value(string nm, string ct, string st, int mk){
            name=nm;
            city=ct;
            state=st;
            mark=mk;
        }
        void get_value(){
            cout<<"Name: "<<name<<" City: "<<city<<" State: "<<state<<" Mark: "<<mark;
        }
};

int main(){
    details d1;
    string name,city,state;
    int mark;
    cout<<"Enter name, city, state and mark: ";
    cin>>name>>city>>state>>mark;
    d1.set_value(name,city,state,mark);
    d1.get_value();
    return 0;
}