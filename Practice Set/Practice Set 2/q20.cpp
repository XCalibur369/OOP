#include<iostream>
using namespace std;

int main(){
    int n=0,count=0,sum=0;
    while(n!=-1){
        cout<<"Enter a number. Enter -1 to exit: ";
        cin>>n;
        if(n==-1){
            break;
        } else{
            sum+=n;
            count++;
        }
    }
    cout<<"The average is: "<<(float)sum/count;

    return 0;
}