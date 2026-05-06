#include<iostream>
using namespace std;
class cricketrs{
    public:
    string name;
    int runs;
    double avg;

    //paramaterised constructor

cricketrs(string n,int i,double avg)
{
    name=n;
    runs=i;
    this->avg=avg;
}
void show(){
    cout<<"Name: "<<name<<endl;
    cout<<"Runs: "<<runs<<endl;
    cout<<"Average: "<<avg<<endl;

}

};
int main(){
    cricketrs c1("dfgh",100,85.6);
    c1.show();
    return 0;
}