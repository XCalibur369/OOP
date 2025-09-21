#include<iostream>
class bank_account{
    private:
        string name;
        int account_number;
        float balance;
    public:
        bank_account(string name,int account_number);
        void get_details(void);
        void withdraw(void);
        void deposit(void);
};