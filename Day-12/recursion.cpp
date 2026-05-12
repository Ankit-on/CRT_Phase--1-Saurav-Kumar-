#include<iostream>
using namespace std;
void print(int n) {
    // Base case
    if(n > 10)
        return;

    cout << n << " ";
   // Recursive call
    print(n + 1);
}
int main(){
    cout<<" Print using For loop: ";
    for(int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout<<endl;
    cout<<"Using Recursion function: ";
    print(1);

    return 0;
}