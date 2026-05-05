//Without Argument with return type
#include <iostream>
using namespace std;

int getNumber() {
    return 10;
}

int main() {
    int x = getNumber();
    cout << x;
    return 0;
}