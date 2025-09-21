#include<iostream>
using namespace std;
#include"head.h"

bank_account::bank_account(string name,int an){
    this->account_number=an;
    this->name=name;
    cout<<"New account has been created. Details:"<<endl<<"Name: "<<name<<endl<<"Account Number: "<<account_number<<endl;
}

void bank_account::withdraw(){
    cout<<"Details:"<<endl<<"Name: "<<name<<endl<<"Account Number: "<<account_number<<endl<<"Balance: "<<balance<<endl<<endl;
    cout<<"Enter the amount to be withdrawn: "<<endl;
    int num;
    cin>>num;
    balance-=num;
}

void bank_account::deposit(){
    cout<<"Details:"<<endl<<"Name: "<<name<<endl<<"Account Number: "<<account_number<<endl<<"Balance: "<<balance<<endl<<endl;
    cout<<"Enter the amount to be deposited: "<<endl;
    int num;
    cin>>num;
    balance+=num;
}

void bank_account::get_details(void){
    cout<<"Details:"<<endl<<"Name: "<<name<<endl<<"Account Number: "<<account_number<<endl;
}