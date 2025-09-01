#include<iostream>
#include<cmath>
using namespace std;

int digits(int num){
    int i=0;
    while(num!=0){
        num/=10;
        i++;
    }
    return i;
}

void armstrong(int num,int digits){
    int check=num;
    int sum=0;
    while(num!=0){
    sum+=round(pow(num % 10, digits));
        num/=10;
    }
    if(sum==check){
        cout<<"\nArmstrong Number";
    }
    else{
        cout<<"\nNot an Armstrong Number";
    }
}

int main(){
    int num=0;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Number of digits: "<<digits(num);
    armstrong(num,digits(num));

    return 0;
}
