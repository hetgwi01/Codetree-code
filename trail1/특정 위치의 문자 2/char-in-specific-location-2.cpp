#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    for(int i = 0; i < 10; i++) {
        char c;
        cin >> c;
        
        if(i % 3 == 1) {
            cout << c << " ";
        }
    }
    cout << "\n";
    return 0;
}