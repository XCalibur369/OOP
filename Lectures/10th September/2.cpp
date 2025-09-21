#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int *arr=new int[n]; //Dynamic memory allocation
    for(int i=0;i<n;i++){
        cout<<"Enter the number: ";
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    delete[] arr;

    return 0;
}