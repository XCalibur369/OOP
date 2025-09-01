#include<iostream>
using namespace std;

int main(){
    int principal,roi,time,si;
    cout<<"Enter the principal, rate of interest and time: "<<endl;
    cin>>principal>>roi>>time;
    si=(principal*roi*time)/100;
    cout<<"The simple interest is: "<<si;
    
    return 0;
}