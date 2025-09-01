#include<iostream>
using namespace std;

class Temp{
    private:
        float celsius;

    public:
        Temp(float cel){
            float far=(cel*(9.0/5))+32;
            cout<<far;
        }
};

int main(){
    float temp;
    cout<<"Enter degree in celsius: ";
    cin>>temp;

    Temp t1(temp);

    return 0;
}