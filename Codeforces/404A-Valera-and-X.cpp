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
    char matrix[n][n];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> matrix[i][j];
        }
    }
    char X = matrix[0][0];
    char Y = matrix[0][1];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if ((i == j) || (i + j == n - 1))
            {
                if (matrix[i][j] != X)
                {
                    cout << "NO";
                    return;
                }
            }
            else
            {
                if (matrix[i][j] != Y)
                {
                    cout << "NO";
                    return;
                }
            }
        }
    }
    if (X == Y)
    {
        cout << "NO";
        return;
    }
    else
        cout << "YES";
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