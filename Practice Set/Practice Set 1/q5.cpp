#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if(num>0){
        cout<<"The number "<<num<<" is positive.";
    } else if(num<0){
        cout<<"The number "<<num<<" is negative.";
    } else{
        cout<<"The number "<<num<<" is zero.";
    }

    return 0;
}