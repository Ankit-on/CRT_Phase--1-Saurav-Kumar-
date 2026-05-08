#include<iostream>
using namespace std;
class ATM{
    private:
    int balance;
    public:
    ATM(int balance){
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
    void show(){
        cout<<"balance in account: "<<balance<<endl;
    }
};

int main(){
    ATM a(2000);
    a.show();
    a.withdraw(500);
    a.show();
    return 0;
}