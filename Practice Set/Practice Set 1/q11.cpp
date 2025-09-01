#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the marks: ";
    cin>>num;
    if(num>=90 && num<=100){
        cout<<"A GRADE";
    } else if(num>=80 && num<90){
        cout<<"B GRADE";
    } else if(num>=70 && num<80){
        cout<<"C GRADE";
    } else if(num>=60 && num<70){
        cout<<"D GRADE";
    } else if(num<60){
        cout<<"F GRADE";
    } else{
        cout<<"Invalid number. Marks entered should be between 0 and 100.";

    }

    return 0;
}