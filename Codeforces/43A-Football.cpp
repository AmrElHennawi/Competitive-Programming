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
    int n;
    cin >> n;
    int score1 = 0, score2 = 0;
    string name1, name2, a;

    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        if (i == 0)
        {
            name1 = a;
        }
        if (name1 != a)
        {
            name2 = a;
        }
        if (a == name1)
        {
            score1++;
        }
        else
        {
            score2++;
        }
    }
    if (score1 > score2)
    {
        cout << name1 << endl;
    }
    else
    {
        cout << name2 << endl;
    }
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