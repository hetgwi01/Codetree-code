#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int num[3];
    for(int i = 0; i < 100; i++) {
        int n;
        cin >> n;
        if(n == 0) {
            break;
        }

        num[i % 3] = n;
    }

    int sum = 0;
    for(int i = 0; i < 3; i++) {
        sum += num[i];
    }

    cout << sum << "\n";

    return 0;
}