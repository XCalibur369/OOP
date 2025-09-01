#include<iostream>
using namespace std;

int main(){
    int num,newnum=0;
    cout<<"Enter the number: ";
    cin>>num;
    do{
        newnum=(newnum*10)+(num%10);
        num/=10;
    }while(num>0);

    cout<<newnum;
    
    return 0;
}