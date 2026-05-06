#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rollno;

    Student(){\
    name="asdf";
    rollno=852;

    }
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Default Constructor"<<endl;
    }
};

int main(){
    Student s1;
    s1.show();
    return 0;
}