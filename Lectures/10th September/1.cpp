#include<iostream>
using namespace std;

class Temple_Run{
    private:
        int coins;
    public:
        void left(void);
        void right(void);
        void get_score(void);
        Temple_Run(){
            this->coins=0;
            cout<<"Game Starts. Run from the monkeys. Score 0!"<<endl;
        }
        friend void bonus(Temple_Run *p6);
};

void Temple_Run::left(void){
    this->coins++;
}
void Temple_Run::right(void){
    this->coins++;
}

/*void powerup(class Temple_Run P){
    this->
}*/

void Temple_Run::get_score(void){
    cout<<"Score: "<<coins<<endl;
}

void bonus(Temple_Run *p6){
    p6->coins+=5;
}

int main(){
    Temple_Run p1;
    p1.left();
    p1.right();
    p1.get_score();
    bonus(&p1);
    p1.get_score();
    return 0;
}