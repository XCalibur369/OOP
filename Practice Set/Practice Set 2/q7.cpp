#include<iostream>
using namespace std;

int prime(int num){
    int c=0;
    if(num<2){
        cout<<"The number "<<num<<" is not a prime number.";
        return 1;
    }
    for(int i=2;i*i<num;i++){
        if(num%i==0){
            cout<<"The number is "<<num<<" is not a prime number.";
            return 1;
        }
    }
    cout<<"The number "<<num<<" is a prime number.";
    return 0;
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    prime(num);
    return 0;
}