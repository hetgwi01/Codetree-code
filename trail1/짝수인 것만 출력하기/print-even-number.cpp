#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if(num % 2 == 0) {
            cout << num << " ";
        }
    }
    cout << "\n";

    return 0;
}