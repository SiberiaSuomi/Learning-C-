#include <iostream>
using namespace std;

int main() {
    cout << "Input";
    string a;
    cin >> a;
    int length, width;
    cout << "Length and Width";
    cin >> length >> width;
    for(int i = 1; i <= length; ++i) {
        for(int j = 1; j <= width; ++j) {
            cout << a << " ";
        }
        cout << endl; 
    }
    return 0;
}
