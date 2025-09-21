#include<iostream>
#include<string>
using namespace std;
#include"head.h"

int main(){
    bank_account b1("Abhinav",1518);
    b1.get_details();

    b1.deposit();
    b1.get_details();
    b1.withdraw();
    b1.get_details();

    return 0;
}