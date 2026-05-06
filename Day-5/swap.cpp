#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    cout<<"after swap:"<<*a<<*b;
}
int main(){
   int a=5;
   int b=7;
   cout<<a<<b<<endl;
   swap(&a,&b);
   return 0; 
}