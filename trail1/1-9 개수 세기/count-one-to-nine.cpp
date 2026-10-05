#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int counts[9] = {0,0,0,0,0,0,0,0,0};
    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        counts[t-1]++;
    }

    for(int i = 0; i < 9; i++) {
        cout << counts[i] << "\n";
    }
    
    return 0;
}