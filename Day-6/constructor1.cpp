#include<iostream>
using namespace std;
class area{
    public:
    int len;
    int br;
    int r;
    double a;

    area(){
        len=0;
        br=0;
    }
    area(int len,int br){
        this->len=len;
        this->br=br;
    }
    area(int s){
        len=s;
        br=s;
    }
    void show(){
        cout<<"area is: "<<len*br<<endl;
    }
};

int main(){
    area a1;
    a1.show();
    area a2(5, 10);
    a2.show();
    area a3(7);
    a3.show();
    return 0;
}