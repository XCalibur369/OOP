#include<iostream>
using namespace std;

int main(){
    int sum=0;
    while(sum<200){
        int num=0;
        cout<<"Please enter the number: ";
        cin>>num;
        sum+=num;
    }
    cout<<"The sum is 200";
    return 0;
}