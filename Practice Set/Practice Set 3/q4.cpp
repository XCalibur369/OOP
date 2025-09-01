#include<iostream>
using namespace std;

class Rectangle{
    private:
        int l,b;
    public:
        void set_value(int len, int brd){
            l=len;
            b=brd;
        }
        void get_value(){
            cout<<"Length: "<<l<<endl<<"Breadth: "<<b<<endl;
        }
        void area(){
            cout<<"Area: "<<l*b<< "sq units";
        }
};

int main(){
    Rectangle s1;
    int length,breadth;
    cout<<"Enter length and breadth: ";
    cin>>length>>breadth;
    s1.set_value(length,breadth);
    s1.get_value();
    s1.area();
    return 0;
}