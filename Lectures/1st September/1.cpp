#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    private:
        string name; //data members
        float bal;
    public:
        /*void set_values(string nm,float bl){
            name=nm;
            bal=bl;
        }*/

        BankAccount(string nm,float bl){
            name=nm;
            bal=bl;
        }
        void get_values(void){//method or member functions
            cout<<"Name: "<<this->name<<endl<<"Balance: "<<this->bal<<endl;
        }
        void deposit(float n1){
            this->bal=this->bal+n1;
        }
        void withdraw(float n2){
            if(this->bal-n2<0){
                cout<<"Insufficient balance. You are in debt by "<<bal-n2<<"$.";
            } else{
                this->bal=this->bal-n2;
                cout<<"Balance is: "<<bal;
        }}
};

int main(){
    
    BankAccount a1("Abhi",1000.9),a2("Nav",5000.77);
    a1.get_values();
    a2.get_values();

    return 0;
}

