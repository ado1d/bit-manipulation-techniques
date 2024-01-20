#include <bits/stdc++.h>
using namespace std;

bool check_power_of_two(int &n) {
    int mask = n - 1;
    return (n & mask) == 0;
}

int main() {
    int n;              cin >> n;
    if (check_power_of_two(n)) cout << "Power of two\n";
    else cout << "Not power of two\n";
}
