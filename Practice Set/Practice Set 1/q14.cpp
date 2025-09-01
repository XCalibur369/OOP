#include<iostream>
using namespace std;

int check_prime(int num){
    int c=0;
    for(int i=2;i<num/2;i++){
        if(num%i==0){
            c++;
        }
    }
    if(c==0){
        cout<<num<<" is a prime number."<<endl;
    }
}

int main(){
    for(int i=2;i<=100;i++){
        check_prime(i);
    }
    return 0;
}