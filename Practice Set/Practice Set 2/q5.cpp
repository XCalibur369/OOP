#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int factorial=1;
    while(num>1){
        factorial*=num;
        num--;
    }
    cout<<factorial<<" is the factorial.";
    return 0;
}