#include<iostream> //constructor
#include<cmath>
using namespace std;

class xycoordinate{
    private:
        float x;
        float y;
    public:
        void set_values(float x1, float y1); //Will elaorate outside class
        void get_values(void);

        //constructors
        /*xycoordinate(){ //This method is called default constructor
            cout<<"Hello world!"<<endl;
            this->x=61;
            this->y=78;

        }*/
        xycoordinate(float n1,float n2){
            this->x=n1;
            this->y=n2;
        }
        xycoordinate(float n3){
            this->x=n3;
            this->y=0;
        }
        void magnitude(float x,float y){
            cout<<"The magnitude is: "<<sqrt(pow(x,2)+pow(y,2));
        }

};

//return type, name of class :: function
/*void xycoordinate :: set_values(float x1, float y1){
    this->x=61;
    this->y=78;
}*/

void xycoordinate :: get_values(void){
    cout<<"X: "<<this->x<<endl<<"Y: "<<this->y<<endl;
}

int main(){
    xycoordinate s1(3.4),s2(4.5,8.9);
    s1.get_values();
    s2.get_values();

    return 0;
}