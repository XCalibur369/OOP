#include<iostream>
using namespace std;

#include<iostream>
#include<cmath>
using namespace std;

class Bank{
    private:
        int accountNo;
        int balance;
    public:
        void set_value(int acc,int bal){
            accountNo=acc;
            balance=bal;
        }
        void get_value(){
            cout<<"Account Number: "<<accountNo<<endl<<"Balance: "<<balance<<endl;
        }
        
};

int main(){
    int n;
    cout<<"Enter the number of users: ";
    cin>>n;
    Bank b[n];
    int acc,bal;
    
    for(int i=0;i<n;i++){
        cout<<"Enter account number and balance: ";
        cin>>acc>>bal;
        b[i].set_value(acc,bal);
    }

    for(int i=0;i<n;i++){
        b[i].get_value();
    }

    return 0;
}