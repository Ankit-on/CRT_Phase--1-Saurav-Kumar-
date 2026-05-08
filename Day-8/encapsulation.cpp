#include<iostream>
using namespace std;
class ATM{
    private:
    int balance;
    public:
    //ENCAPSULATION
    void setbalance(int balance){
        this->balance=balance;
    }
    void withdraw(int amount){
        if(amount>balance){
            cout<<"insufficient balance!!!"<<endl;
        }else{
            balance-=amount;
            cout<<"amount withdrawn: "<<amount<<endl;
        }
    }
    int getbalance(){
        return balance;
    }
};

int main(){
    int n;
    cout<<"enter balance: ";
    cin>>n;
    ATM a;
    a.setbalance(n);
    cout<<"Balance is: "<<a.getbalance()<<endl;
    a.withdraw(500);
    cout<<"Balance is: "<<a.getbalance()<<endl;
    return 0;
}