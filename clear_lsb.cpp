#include <bits/stdc++.h>
using namespace std;

void clear_lsb_till_iTH_bit(int &n, int &i) {
    int mask = 1 << (i + 1);
    mask -= 1;
    mask = ~mask;
    n = n & mask;
}

int main() {
    int n, i;               cin >> n >> i;
    cout << bitset<8>(n) << '\n';
    clear_lsb_till_iTH_bit(n, i);
    cout << n << ' ' << bitset<8>(n);
}
