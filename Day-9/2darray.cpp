#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"enter a elements for 2D array: "<<endl;
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        cout<<endl;
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }

    }
    return 0;
}