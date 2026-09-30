#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int count = 0;
    int num = n;
    while(count < 2) {
        if(num % 5 ==0) {
            count++;
        }
        cout << num << " ";
        num += n;
    }
    cout << "\n";

    return 0;
}