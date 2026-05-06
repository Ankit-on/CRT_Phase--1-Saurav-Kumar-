#include<iostream>
using namespace std;
int coffee(int n){
    int total=n*30;
    cout<<"total coffee shot: "<<total<<"ml";
    return 0;
}
int main(){
    int n;
    cout<<"enter no. of shots: ";
    cin>>n;
    coffee(n);
    return 0;
}