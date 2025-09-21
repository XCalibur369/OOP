#include<iostream>
using namespace std;
class vector;
class matrices{
    private:
        int arr[2][2];
    public:
        matrices(int a,int b,int c,int d){
            this->arr[0][0]=a;
            this->arr[0][1]=b;
            this->arr[1][0]=c;
            this->arr[1][1]=d;
        }
        void get_matrices(void){
            cout<<"The Matrix: "<<endl<<arr[0][0]<<"   "<<arr[0][1]<<endl<<arr[1][0]<<"   "<<arr[1][1]<<endl;
        }
        friend vector MUL(matrices *m1, vector *v1);
};

class vector{
    private:
        int arr2[2];
    public:
        vector(int a,int b){
            this->arr2[0]=a;
            this->arr2[1]=b;
        }
        void get_vector(void){
            cout<<"The vector is: "<<arr2[0]<<" "<<arr2[1]<<endl;
        }
        friend vector MUL(matrices *m1, vector *v1);

};

vector MUL(matrices *m1,vector *v1){
    vector ans(0,0);
    ans.arr2[0]=m1->arr[0][0]*v1->arr2[0]+m1->arr[0][1]*v1->arr2[1];
    ans.arr2[1]=m1->arr[1][0]*v1->arr2[0]+m1->arr[1][1]*v1->arr2[1];

    return ans;
}

int main(){
    matrices m1(1,2,3,4);
    m1.get_matrices();
    vector v1(2,8),v3(0,0);
    v1.get_vector();
    v3=MUL(&m1,&v1);
    v3.get_vector();
    return 0;
}