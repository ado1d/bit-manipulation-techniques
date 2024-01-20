#include <iostream>
using namespace std;
int cnt_bits(int &n) {
    int ans = 0;
    while (n > 0) {
        ans += n & 1;
        n = n >> 1;
    }
    return ans;
}

//faster method to count set bits
int cnt_bits_hack(int &n) {
    int ans = 0;
    while (n > 0) {
        n = n & (n - 1);    //removes last set bits from current number
        ans++;
    }
    return ans;
}

int main() {
    int n;          cin >> n;
    cout << cnt_bits_hack(n);
}
