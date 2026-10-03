#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int p = 1;
    cout << p << " " << n << " ";
    do {
        int tmp = n;
        n += p;
        p = tmp;

        cout << n << " ";
    } while (n < 100);
    return 0;
}