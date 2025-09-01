#include<iostream>
using namespace std;

int palindrome(int num){
    int newnum=0;
    int tempnum=num;

    while(tempnum>0){
        newnum=newnum*10+(tempnum%10);
        tempnum/=10;
    }

    return(num==newnum)?0:-1;
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(palindrome(num)==0){
        cout<<num<<" is a palindrome number.";
    } else{
        cout<<num<<" is not a palindrome number.";
    }
    return 0;
}