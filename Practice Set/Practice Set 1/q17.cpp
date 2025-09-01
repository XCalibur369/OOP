#include<iostream>
#include<cstdlib>
using namespace std;

void fibonacci(int num){
    int *fibo=(int*)calloc(num, sizeof(int));
    fibo[0]=0;
    fibo[1]=1;
    cout<<fibo[0]<<endl<<fibo[1]<<endl;
    for(int i=2;i<num;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
        cout<<fibo[i]<<endl;
    }
    free(fibo);

}

int main(){
    int num;
    cout<<"Enter the nth term: ";
    cin>>num;
    fibonacci(num);
    return 0;
}