#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int count[10] = {0,0,0,0,0,0,0,0,0,0};

    int n;
    do{
        cin >> n;
        int a = n / 10;
        count[a]++;
    } while(n != 0);

    for(int n = 1; n < 10; n++) {
        cout << n << " - " << count[n] << "\n";
    }

    return 0;
}