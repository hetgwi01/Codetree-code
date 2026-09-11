#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int m = 13;
    float g = 0.165;

    cout.setf(ios::fixed);
    streamsize prev_prec = cout.precision(6);

    cout << m << " * " << g << " = " << m*g << "\n";
    
    cout.unsetf(ios::fixed);
    cout.precision(prev_prec);

    return 0;
}