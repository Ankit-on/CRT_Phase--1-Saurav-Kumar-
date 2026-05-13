#include<iostream>
using namespace std;
int sumofdigit(int x){
    if(x==0)
    return 0;
    return(x%10)+sumofdigit(x/10);
    
}
int main(){
    int n;
    cout<<"enter digits: ";
    cin>>n;
    cout<<"sum of digits of "<<n<<" is: "<<sumofdigit(n)<<endl;
    return 0;
}