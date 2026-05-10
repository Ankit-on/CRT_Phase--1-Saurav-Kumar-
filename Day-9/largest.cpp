#include<iostream>
using namespace std;

class solution{
    public:

    int lar(int arr[], int n){

        int maxi = arr[0];

        for(int i=0; i<n; i++){

            if(arr[i] > maxi)
                maxi = arr[i];
        }

        return maxi;
    }
};

int main(){

    int ar[5] = {1,2,85,95,45};

    int size = sizeof(ar)/sizeof(ar[0]);

    solution s1;

    int a = s1.lar(ar, size);

    cout<<"maximum: "<<a;

    return 0;
}