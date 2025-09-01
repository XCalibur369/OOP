#include<iostream>
using namespace std;

int main(){
    int num=0;
    cout<<"Enter a number: ";
    cin>>num;
    if(num%3==0 && num%5==0){
        cout<<"FizzBuzz";
    }
    else if(num%3==0 && num%5!=0){
        cout<<"Fizz";
    }
    else if(num%5==0 && num%3!=0){
        cout<<"Buzz";
    }
    else{
        cout<<"Divisible by neither 3 nor 5.";
    }

    return 0;
}