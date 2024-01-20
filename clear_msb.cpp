#include <bits/stdc++.h>
using namespace std;

void clear_msb_till_iTH_bit(int &n, int &i) {
    int mask = 1 << i;
    mask -= 1;   //to make all 1 till i-th bit
    n &= mask;
}

int main() {
    int n, i;               cin >> n >> i;
    cout << bitset<8>(n) << '\n';
    clear_msb_till_iTH_bit(n, i);
    cout << n << ' ' << bitset<8>(n);
}
