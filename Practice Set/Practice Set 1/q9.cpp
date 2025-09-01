#include<iostream>
using namespace std;

int main(){
    int num,factorial=1;
    cout<<"Enter the number: ";
    cin>>num;

    for(int i=num;i>0;i--){
        factorial=factorial*i;
    }

    cout<<"The factorial of "<<num<<" is: "<<factorial;

    return 0;
}