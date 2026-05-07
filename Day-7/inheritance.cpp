#include<iostream>
using namespace std;
class player{
    public:
    string name;
    int age;
void setName(string n){
    name=n;
}

};

//Derived class

class cricketrs:public player{
    public:
    int runs;
    void setruns(int r){
        runs=r;
    }
    void show(){
        cout << "Name: " << name << endl;
        cout << "Runs: " << runs << endl;
    }
};

int main(){
    int r;
    cin>>r;
    cricketrs c1;
    c1.setName("virat");
    c1.setruns(r);
    c1.show();

    return 0;
}