#include <iostream>

int main(){
    using namespace std;
    int x = 5;
    int * pX = &x;
    cout << x;
    cout << " " << pX << endl;
    return 0;
}