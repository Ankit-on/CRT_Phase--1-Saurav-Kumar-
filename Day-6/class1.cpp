#include<iostream>
using namespace std;
class Student{
    private:
    int reg=100;

    public:
    int a;
    string name;
    void input(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter roll no.: ";
        cin>>a;
    }

    void display(){
        cout<<"Reg NO: "<<reg<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"roll no: "<<a<<endl;
        reg++;
    }
};

int main(){
    Student s2;
    s2.input();
    s2.display();

}