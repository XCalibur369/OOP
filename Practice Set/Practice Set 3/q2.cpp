#include<iostream>
using namespace std;

class Bank{
    private:
        float balance;
    public:
        void set_value(float bal){
            balance=bal;
        }
        void get_value(){
            cout<<"Remaining balance: "<<balance;
        }
};

int main(){
    Bank b1;
    float bal;
    cout<<"Enter balance amount: ";
    cin>>bal;
    b1.set_value(bal);
    b1.get_value();
    return 0;
}