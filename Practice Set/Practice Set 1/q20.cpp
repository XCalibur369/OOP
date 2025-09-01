#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}

int main() {
    cout<<"Enter the two numbers: ";
    int num1,num2;
    cin>>num1>>num2;
    cout<<"Greatest common divisor of "<<num1<<" and "<<num2<<" is "<<gcd(num1,num2)<<endl;
    return 0;
}
