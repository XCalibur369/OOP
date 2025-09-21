#include<iostream>
using namespace std;

int check(int num){
    if(num%2==0){
        return 0;
    } else{
       return 1;
    }
}

int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;

    if(check(num)==0){
        cout<<"The number is even.";
    } else if(check(num)==1){
        cout<<"The number is odd.";
    }

    return 0;
}