#include<iostream>
using namespace std;

int check_prime(int num){
    int c=0;
    if(num<2){
        return -1;
    } else{
        for(int i=2;i<num/2;i++){
            if(num%i==0){
                c++;
            }
        }
    }
    return(c==0)?0:-1;
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(check_prime(num)==0){
        cout<<num<<" is a prime number.";
    } else{
        cout<<num<<" is not a prime number.";
    }
    return 0;
}