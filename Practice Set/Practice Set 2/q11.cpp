#include<iostream>
using namespace std;

int main(){
    int base=0,exp=0,num=1;
    cout<<"Enter base and exponent: ";
    cin>>base>>exp;
    for(int i=0;i<exp;i++){
        num*=base;
    }
    cout<<num;

    return 0;
}