#include<iostream>
using namespace std;

int main(){
    int n,max=0;
    cout<<"Enter a number: ";
    cin>>n;
    if(n>0){
        while(n>0){
            if(n%10>max){
                max=n%10;
            }
            n/=10;
        }
    } else if(n<0){
        n=-n;
        while(n>0){
            if(n%10>max){
                max=n%10;
            }
            n/=10;
        }
    }
    cout<<"The largest digit is: "<<max;
    return 0;
}
