#include <iostream>
using namespace std;

bool NAND(bool a, bool b) {
    return !(a && b);
}
bool AND(bool a, bool b) {
    return (a && b);
}
bool OR(bool a, bool b) {
    return (a || b);
}
bool NOT(bool a, bool b) {
    return !(a);
    return !(b);
}
bool XOR(bool a, bool b) {
    return a != b; // simple way
}

int main() {
    bool A, B;
    cout << "Enter inputs: " << endl;
    cin >> A, B;

    if( !(A || B == 1 || 0)){
        cout << "Invalid";
    }

    cout << "A NAND B: " << NAND(A, B) << endl; // 1 NAND 1 = 0

    cout << "A AND B:  " << AND(A, B) << endl; // 1 AND 1 = 1

    cout << "A OR B:   " << OR(A, B) << endl; // 1 OR 1 = 1

    cout << "NOT A AND NOT B: " << NOT(A, B) << endl; // NOT 1 = 0, NOT 0 = 1

    cout << "XOR: " << XOR(A, B) << endl; // XOR gate
    
    return 0;
}
