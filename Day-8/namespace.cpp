#include<iostream>
using namespace std;
 namespace virat{
    void show(){
        cout<<"he is part of rcb"<<endl;
    }
 }
 namespace rohit{
    void show(){
        cout<<"part if MI"<<endl;
      }
    }
int main(){
    virat::show();
    rohit::show();
    return 0;
}