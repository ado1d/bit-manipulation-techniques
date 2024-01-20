#include <iostream>
using namespace std;

void pirnt_binary(int &n) {
    for (int i = 10; i >= 0; i--) {
        cout << ((n >> i) & 1);
    }
}

int main() {
    int n;          cin >> n;
    pirnt_binary(n);
}
