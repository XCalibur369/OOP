#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if((num%5==0) && (num%7==0)){
        cout<<"The number is divisible by both 5 and 7.";
    }else if((num%5==0) && (num%7!=0)){
        cout<<"The number is divisible by 5 alone.";
    }else if((num%7==0) && (num%5!=0)){
        cout<<"The number is divisible by 7 alone.";
    }else{
        cout<<"The number is not divisible by both 7 and 5.";
    }

    return 0;
}