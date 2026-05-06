#include<iostream>
using namespace std;
void bill(double amount){
    double update;
    update=amount*0.9;
    cout<<"Bill after 10% discount: "<<update;
}
int main(){
   double amount;
   cout<<"enter bill amount: ";
   cin>>amount;
   bill(amount);
   return 0;
}