#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    float a = 25.352;

    cout.setf(ios::fixed);
    streamsize prev_prec = cout.precision(1);

    cout << a << "\n";

    cout.unsetf(ios::fixed);
    cout.precision(prev_prec);
    return 0;
}