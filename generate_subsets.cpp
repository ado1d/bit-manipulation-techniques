#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(vector<int> &a) {
    int n = a.size();
    int cnt_subsets = 1 << n;
    vector<vector<int>> all_subsets;
    for (int mask = 0; mask < cnt_subsets; mask++) {
        vector<int> subset;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {    //check if the bit is set
                subset.push_back(a[i]);
            }
        }
        all_subsets.push_back(subset);
    }
    return all_subsets;
}


int main() {
    int n;                      cin >> n;
    vector<int> a(n);
    for (auto &x : a)           cin >> x;
    auto all_subsets = subsets(a);
    //show all subsets
    int cnt = 1;
    for (auto x : all_subsets) {
        cout << cnt++ << ": " ;
        for (auto z: x) {
            cout << z << ' ';
        }
        cout << '\n';
    }
    
}
