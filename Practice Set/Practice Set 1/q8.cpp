#include<iostream>
using namespace std;

int main(){
    int num,sum;
    cout<<"Enter the number: ";
    cin>>num;

    sum=(num*(num+1))/2;

    cout<<"The sum of "<<num<<" natural numbers is: "<<sum;

    return 0;
}