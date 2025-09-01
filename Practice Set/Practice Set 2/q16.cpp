#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    int rev=0,temp=num;
    while(temp>0){
        rev=rev*10+temp%10;
        temp/=10;
    }

    if(rev==num){
        cout<<num<<" is a palindrome number.";
    } else {
        cout<<num<<" is not a palindrome number.";
    }
    return 0;
}