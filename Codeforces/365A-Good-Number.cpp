#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;

#define loop(i, n) for (int i = 0; i < n; i++)
#define fi first
#define se second
#define pp push_back
#define all(x) (x).begin(), (x).end()
#define Ones(n) __builtin_popcount(n)
#define endl '\n'
#define mem(arrr, xx) memset(arrr, xx, sizeof arrr)
#define PI acos(-1)
#define int long long
// #define debug(x) cout << (#x) << " = " << x << endl

void Amr()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
}

void solve()
{
    int n, k, sum = 0;
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
    {
        vector<int> v(k + 1, 0);
        bool flag = false;
        string s;
        cin >> s;
        for (int j = 0; j < s.size(); ++j)
        {
            if (s.size() < k + 1)
            {
                flag = false;
                break;
            }
            if ((s[j] - '0') <= k)
            {
                v[s[j] - '0']++;
            }
        }
        for (int j = 0; j <= k; ++j)
        {
            if (v[j] == 0)
            {
                flag = false;
                break;
            }
            else
            {
                flag = true;
            }
        }
        if (flag)
            sum++;
    }
    cout << sum;
}

signed main()
{
    Amr();
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}