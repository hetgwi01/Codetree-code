#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int count[6] = {0, 0, 0, 0, 0, 0};

    for(int i = 0; i < 10; i++) {
        int n;
        cin >> n;
        
        count[n%6]++;
    }

    for(int i = 1; i < 7; i++) {
        cout << i << " - " << count[i%6] << "\n";
    }
    return 0;
}