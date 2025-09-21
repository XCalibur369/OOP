#include<iostream>
#include<string>
using namespace std;
class state_bank{
    private:
        string name;
        int account_number;
        float bal;
    public:
    static float total_balance; //Declaration of static variable
        state_bank(string n, int a, float b){
            this->name=n;
            this->account_number=a;
            this->bal=b;
            this->total_balance=total_balance+bal;
        }
        void get_details(){
            cout<<"Name: "<<this->name<<endl<<"Acccount No.: "<<this->account_number<<endl<<"Balance: "<<bal<<endl<<endl<<"Total balance of the bank is: "<<this->total_balance<<endl;
        }
};

float state_bank::total_balance=0; //Class variable

int main(){
    state_bank a1("Jim",1701,9999.99);
    a1.get_details();
    state_bank a2("Spock",74656,1000.00);
    a2.get_details();

    return 0;
}