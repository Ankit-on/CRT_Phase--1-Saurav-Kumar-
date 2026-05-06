#include<iostream>
using namespace std;
class Student{
    public:
    int a;int b;
    string name;
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"roll no: "<<a<<endl;
        cout<<"marks: "<<b<<endl;
    }
};

int main(){
    Student s1;
    cout<<"Enter Name: ";
    cin>>s1.name;
    cout<<"Enter Roll No.: ";
    cin>>s1.a;
    cout<<"enter marks: ";
    cin>>s1.b;

    s1.display();

    return 0;
}