#include<iostream>
using namespace std;
int add(int a,int b){
    int sum=a+b;
    cout<<"sum of "<<a<<" + "<<b<<" is: "<<sum;
    return 0;
}
int main(){
    int a,b;
    cout<<"enter first no: ";
    cin>>a;
    cout<<"enter second no: ";
    cin>>b;
    add(a,b);
    return 0;

}