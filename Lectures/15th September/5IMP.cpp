#include<iostream>
using namespace std;

class Complex{
    private:
        float a,b;
    public:
        Complex(float x, float y){
            this->a=x;
            this->b=y;
            cout<<"New number has been created. "<<this<<endl;
            cout<<"NEW ONE IS: "<<endl<<a<<" +i "<<b<<endl;

        }
        void get_details(void){
            cout<<"Number is: "<<a<<" + "<<b<<"i"<<endl;
        }

        Complex operator>>(const Complex & second_obj){
            Complex c3(0,0);
            c3.a=this->a*second_obj.a-this->b*second_obj.b;
            c3.b=this->a*second_obj.b+this->b*second_obj.a;
            return c3;
        }
        ~Complex(){
            cout<<"Aries"<<endl<<this<<endl;
        }
};

int main(){

    Complex c1(3,4),c2(4,5);
    c2=c1>>c2;
    c2.get_details();

    return 0;
}
