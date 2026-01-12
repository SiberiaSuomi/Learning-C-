#include <iostream>
using namespace std;

int main() {
    cout << "Input";
    string a;
    cin >> a;
    for(int i = 1; i <= 10; ++i) {
        for(int j = 1; j <= 10; ++j) {
            cout << a << " ";
        }
        cout << endl; // line break = sanity restored
    }
    return 0;
}
