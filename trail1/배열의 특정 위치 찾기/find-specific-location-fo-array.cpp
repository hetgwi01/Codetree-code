#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int sum1 = 0;
    int sum2 = 0;

    for(int i = 1; i <= 10; i++) {
        int n;
        cin >> n;
        if(i % 2 == 0) {
            sum1 += n;
        }
        if(i % 3 == 0) {
            sum2 += n;
        }
    }

    float avg = (float)sum2 / 3;

    cout << sum1 << " ";

    cout.setf(ios::fixed);
    streamsize prev_prec = cout.precision(1);

    cout << avg << "\n";

    cout.unsetf(ios::fixed);
    cout.precision(prev_prec);

    return 0;
}