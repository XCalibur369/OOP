#include<iostream>
#include<cmath>
using namespace std;

int quadratic(float a,float b,float c){
    float d;
    double root1,root2;
    d=(pow(b,2))-(4*a*c);
    if(d>0){
        cout<<"There exist two real roots."<<endl;
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        cout<<"Roots are: "<<root1<<" and "<<root2<<endl;
    } else if(d==0){
        cout<<"There exists one real root."<<endl;
        root1=((-b+sqrt(d))/(2*a));
        cout<<"Root is: "<<root1<<endl;
    } else{
        cout<<"There are 2 complex roots."<<endl;
        d=-d;
        cout<<"Root 1 is: "<<-b/(2*a)<<" + "<<sqrt(d)/(2*a)<<" i"<<endl;
        cout<<"Root 2 is: "<<-b/(2*a)<<" - "<<sqrt(d)/(2*a)<<" i"<<endl;
    }
}

int main(){
    float a,b,c;
    cout<<"Please enter the a, b and c values: ";
    cin>>a>>b>>c;

    quadratic(a,b,c);

    return 0;
}