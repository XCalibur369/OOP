#include<iostream>
using namespace std;

class Car{
    private:
        string company;
        string car;
    public:
        void set_value(string brand, string model){
            company=brand;
            car=model;
        }
        void get_value(){
            cout<<"Company: "<<company<<endl<<"Model: "<<car<<endl;
        }
};

int main(){
    string comp,model;
    int times;
    cout<<"Enter the number of times: ";
    cin>>times;

    Car e[times];

    for(int i=0;i<times;i++){
        cout<<"Enter the company and model: ";
        cin>>comp>>model;
        e[i].set_value(comp,model);
    }

    for(int i=0;i<times;i++){
        cout<<"Number "<<i+1<<endl<<endl;
        e[i].get_value();
    }

    return 0;
}