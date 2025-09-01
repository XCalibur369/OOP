#include<iostream>
#include<cmath>
using namespace std;

class Circle{
    private:
        int radius;
    public:
        void set_value(int r){
            radius=r;
        }
        void get_value(){
            cout<<"Radius: "<<radius<<endl;
        }
        void area(){
            cout<<"Area: "<<(float)3.14*pow(radius,2)<< "sq units";
        }
};

int main(){
    Circle c1;
    int radius;
    cout<<"Enter radius: ";
    cin>>radius;
    c1.set_value(radius);
    c1.get_value();
    c1.area();
    return 0;
}