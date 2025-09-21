#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int imaginary;

    public:
    static float count;
        Complex(int r,int i){
            real=r;
            imaginary=i;
            count++;
        }
        get_numbers(void){
            cout<<this->count<<endl<<"The number is: "<<this->real<<"+"<<this->imaginary<<"i"<<endl;
        }
        void sum(Complex c1,Complex c2){
            cout<<c1.real+c2.real<<"+"<<c1.imaginary+c2.imaginary<<"i"<<endl;
        }
};

float Complex::count=0;

int main(){
    Complex c1(3,2);
    c1.get_numbers();

    Complex c2(5,2);
    c2.get_numbers();

    c1.sum(c1,c2);

    
    return 0;
}