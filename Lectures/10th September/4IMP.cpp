#include<iostream>
using namespace std;

class Complex{
    private:
        float a,b;
    public:
        Complex(float x, float y){
            this->a=x;
            this->b=y;
            cout<<"New number has been created. "<<endl;
            cout<<"NEW ONE IS: "<<endl<<a<<" +i "<<b<<endl;

        }
        void get_details(void){
            cout<<"Number is: "<<a<<" + "<<b<<"i"<<endl;
        }
        Complex operator-(const Complex&second_obj){
            Complex c3(0,0);
            c3.a=this->a-second_obj.a;
            c3.b=this->b-second_obj.b;
            return c3;
        }
        ~Complex(){
            cout<<"Aries"<<endl<<a<<" +i "<<b;
        }
};

int main(){
    {
        Complex c1(6,5),c2(2,3),c4(0,0);
        c4=c1-c2;
        c4.get_details();
    }
    Complex c6(4,9),c7(5,9),c9(0,0);
    c9=c6-c7;
    c9.get_details();

    return 0;
}
