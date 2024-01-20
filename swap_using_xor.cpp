#include <bits/stdc++.h>
using namespace std;

void swap_using_xor(int &a, int &b) {
    a ^= b;
    b ^= a;  //b --> a   as b ^ b = 0 -> 0 ^ a = a
    a ^= b;  //a --> b
}

int main() {
    int a, b;           cin >> a >> b;
    swap_using_xor(a, b);
    cout << a << ' ' << b;
}
