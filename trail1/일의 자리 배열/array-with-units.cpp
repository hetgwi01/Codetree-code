#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n[2];
    for(int i = 0; i < 2; i++) {
        cin >> n[i];
        cout << n[i] << " ";
    }

    for(int i = 0; i < 8; i++) {
        int j = i % 2;

        n[j] = (n[0] + n[1]) % 10;
        cout << n[j] << " ";
    }
    cout << "\n";

    return 0;
}