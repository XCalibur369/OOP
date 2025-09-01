#include<iostream>
#include<string>
using namespace std;

class Uni{
    private:
        string name;
        int ranking;
    public:
        void set_values(string nm,int rk){
            name=nm;
            ranking=rk;
        }
        void get_values(){
            cout<<"Name: "<<name<<endl<<"Ranking: "<<ranking<<endl;
        }
};

int main(){
    int count;
    cout<<"Enter the number of students: ";
    cin>>count;

    Uni u[count];

    for(int i=0;i<count;i++){
        string name;
        int rank;
        cout<<"Enter the name and ranking: ";
        cin>>name>>rank;
        u[i].set_values(name,rank);
    }

    for(int i=0;i<count;i++){
        u[i].get_values();
    }
    return 0;
}

