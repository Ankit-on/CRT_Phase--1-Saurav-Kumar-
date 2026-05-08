#include<iostream>
using namespace std;
class car{
    private:
    int speed;
    public:
    car(){
        speed=120;
    }
    void show()const
    {
        //speed=150;
        cout<<"the speed is: "<<speed<<endl;
    }
};
int main(){
    car c1;
    c1.show();
    return 0;
}