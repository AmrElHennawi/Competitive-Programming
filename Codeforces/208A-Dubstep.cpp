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

void trim(string &s)
{
    s.erase(s.begin(), find_if(s.begin(), s.end(), [](int ch)
                               { return !isspace(ch); }));

    s.erase(find_if(s.rbegin(), s.rend(), [](int ch)
                    { return !isspace(ch); })
                .base(),
            s.end());
}

void solve()
{
    int count = 0;
    string str, ans = "";
    cin >> str;
    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B')
        {
            i += 2;
            count++;
            if (count == 1)
                ans += " ";
        }
        else
            ans += str[i];
        count = 0;
    }
    trim(ans);
    cout << ans << endl;
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