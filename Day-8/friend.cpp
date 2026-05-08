#include<iostream>
using namespace std;
class area{
    private:
    int len;
    int width;
    public:
    void setsides(int l,int w){
        len=l;
        width=w;
    }
    friend void showarea(area a);
};
void showarea(area b){
    int area=b.len*b.width;
    cout<<"Area is: "<<area<<endl;
}
int main(){
    area a;
    a.setsides(5,10);
    showarea(a);
    return 0;
}