#include<iostream> //constructor
using namespace std;

class xycoordinate{
    private:
        float x;
        float y;
    public:
        void set_values(float x1, float y1); //Will elaorate outside class
        void get_values(void);
};

//return type, name of class :: function
void xycoordinate :: set_values(float x1, float y1){
    this->x=x1;
    this->y=y1;
}

void xycoordinate :: get_values(void){
    cout<<"X: "<<x<<endl<<"Y: "<<y;
}

int main(){
    xycoordinate xy;
    xy.set_values(1,2);
    xy.get_values();

    return 0;
}