#include<iostream>
using namespace std;

class Books{
    private:
        string title;
        float price;
    public:
        void set_value(string tit, float mn){
            title=tit;
            price=mn;
        }
        void get_value(){
            cout<<"Title of the book: "<<title<<endl<<"Price of the book: "<<price;
        }
};

int main(){
    Books s1;
    string title;
    float price;
    cout<<"Enter title and price: ";
    cin>>title>>price;
    s1.set_value(title,price);
    s1.get_value();
    return 0;
}