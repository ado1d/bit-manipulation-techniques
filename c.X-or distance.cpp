      //Problem statement
  //You are given integers a, b, r. Find the smallest value of |(a⊕x)−(b⊕x)| among all 0≤x≤r.

#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>


using namespace __gnu_pbds;

// for ordered_set(policy based data structure)
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define faster_ayman    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int             long long
#define pb              push_back
#define rep(i, a, b)    for (auto i = a; i < b; i++)
#define rerep(i, a, b)   for (auto i = a; i >= b; i--)
#define all(a)          (a).begin(), (a).end()
#define testcase        int tt;cin >> tt;while (tt--)
#define inf             1e18
#define _               << ' ' <<
#define debugarray(a)   for (auto &x : a) cout << x << ' ';


typedef vector<int>                         vi;
typedef vector<pair<int,int>>               vp;
typedef vector<double>                      vd;
typedef vector<char>                        vc;
typedef set<int>                            si;
typedef set<char>                           sc;
typedef unordered_set<int>                  usi;

bool get_ith_bit(int a, int i) {
    int mask = 1ll << i;
    return a & mask;
}

void set_ith_bit (int &a, int i) {
    int mask = 1ll << i;
    a = a | mask;
}

void clear_ith_bit(int &a, int i) {
    int mask = ~(1ll << i);
    a = a & mask;
}


void solve() {
    int a, b, r;                    cin >> a >> b >> r;
    int x = 0;
    if (a > b) swap(a, b);
    bool ok = 1;
    rerep(i, 63, 0) {
        bool ith_aBit = get_ith_bit(a, i); bool ith_bBit = get_ith_bit(b, i);
        if (ith_aBit != ith_bBit) {
            if (ok) ok = 0;
            else {
                if (!ith_aBit && (x + (1ll << i) <= r)) {
                    x += (1ll << i);
                    set_ith_bit(a, i);
                    clear_ith_bit(b, i);
                }
            }
        }

    }
    cout << b - a << '\n';
}

signed main() {
    
    faster_ayman
    testcase {
        solve();
    }
    
    return 0;
}
        
