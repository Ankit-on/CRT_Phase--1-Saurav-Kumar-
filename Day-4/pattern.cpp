#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter no. of rows: ";
    cin>>a;
    int b;
    cout<<"enter no. of columns: ";
    cin>>b;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            cout<<'*';
        }
        cout<<endl;
    }
}