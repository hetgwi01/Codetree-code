#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n[10];

    for(int i = 0; i < 10; i++) {
        cin >> n[i];
        if(n[i] % 3 == 0) {
            cout << n[i-1] << "\n";
            break;
        }
    }
    return 0;
}