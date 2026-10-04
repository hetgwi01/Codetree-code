#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n[2];
    for(int i = 0; i < 2; i++) {
        cin >> n[i];
        cout << n[i] << " ";
    }

    for (int i = 2; i < 10; i++) {
        n[i % 2] = n[(i+1) % 2] + 2 * n[i % 2];
        cout << n[i % 2] << " ";
    }
    cout << "\n";

    return 0;
}