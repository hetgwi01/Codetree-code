#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    for(int i = 0; i < 100; i++) {
        int n;
        cin >> n;
        if(n == 0) {
            break;
        }
        cout << (n % 2 == 0 ? n / 2 : n + 3) << " ";
    }
    cout << "\n";
    return 0;
}