#define interactive 0

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> p;

ll mod = 1e9 + 7;
int BIG32 = 1e9 + 5;

ll powmod(ll a,ll b) {ll res = 1; a %= mod; assert(b >= 0); for(; b; b >>= 1){if (b & 1) res = res * a % mod; a = a * a % mod;} return res;}

template <typename T> void output_vector(vector<T> V) {for (auto v : V) cout << v << ' '; if (interactive) cout << endl; else cout << '\n';}
template <typename T> T max(vector<T> V) {return *max_element(V.begin(), V.end());}
template <typename T> T min(vector<T> V) {return *min_element(V.begin(), V.end());}

void solve() {
    int k, a = 1; cin >> k;
    while (a * a < k) a++;
    int corner = a * a - (a - 1);
    if (corner == k) cout << a << " " << a << '\n';
    if (corner < k) cout << a << " " << a - (k - corner) << "\n";
    if (corner > k) cout << a - (corner - k) << " " << a << '\n';
}

int main() 
{
    cout.tie(nullptr); cin.tie(nullptr); ios_base::sync_with_stdio(false);
    if (interactive) solve();
    else {
        int t; cin >> t; while (t--) {
            solve();
        }
    }
    return 0;
}