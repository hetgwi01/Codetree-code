#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int odd = 0;
    int even = 0;

    for(int i = 1; i <= 10; i++) {
        int n;
        cin >> n;

        if(i % 2 == 0) {
            even += n;
        } else {
            odd += n;
        }
    }

    cout << abs(even - odd) << "\n";
    return 0;
}