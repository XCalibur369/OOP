#include<iostream>
using namespace std;

int sum(int num){
    int digits=0;
    int tempnum=num;
    int sum=0;
    while(tempnum!=0){
        digits++;
        tempnum/=10;
    }

    for(int i=0;i<digits;i++){
        sum=sum+(num%10);
        num/=10;
    }

    return sum;
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<sum(num);
    return 0;
}