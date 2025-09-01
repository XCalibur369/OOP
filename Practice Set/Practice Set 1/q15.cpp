#include<iostream>
using namespace std;

int reverse(int num){
    int newnum=0;

    while(num>0){
        newnum=newnum*10+(num%10);
        num/=10;
    }

    return newnum;
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<reverse(num);
    return 0;
}