#include<iostream>
using namespace std;
int power_check(int x){
    if(x==0)
    return false;
    if(x==1)
    return true;
    return(x%2==0)&&power_check(x/2);

}
int main(){
    int n;
    cout<<"enter to check number in power of two: ";
    cin>>n;
    bool result=power_check(n);
    if(result)
    cout<<n<<" is power of 2."<<endl;
    else
    cout<<n<<" is not in power of 2."<<endl;
    return 0;

}