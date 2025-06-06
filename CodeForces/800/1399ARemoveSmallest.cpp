// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

// ===== TYPES =====
#define ll long long
#define ld long double
#define pii pair<int, int>
#define pll pair<ll, ll>

// ===== CONTAINERS =====
#define vi vector<int>
#define vl vector<ll>
#define vii vector<pii>
#define vll vector<pll>

// ===== SHORTCUTS =====
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

// ===== ALGORITHMS =====
#define srt(v) sort(all(v))
#define rsrt(v) sort((v).rbegin(), (v).rend())
#define rev(v) reverse(all(v))
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define min3(a, b, c) min(min(a, b), c)
#define max3(a, b, c) max(max(a, b), c)
#define min4(a, b, c, d) min(min(a, b), min(c, d))
#define max4(a, b, c, d) max(max(a, b), max(c, d))

// ===== LOOPS =====
#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)
#define ROF(i, a, b) for (int i = (a); i >= (b); --i)
#define REP(i, n) for (int i = 0; i < (n); ++i)

// ===== IO + UTILS =====
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define nl '\n'
#define sp ' '
#define mem(a, b) memset(a, b, sizeof(a))
#define tst    \
    int TT;    \
    cin >> TT; \
    for (int tc = 1; tc <= TT; tc++)

// ===== MATH HELPERS =====
#define gcd(a, b) __gcd(a, b)

// ===== CONSTANTS =====
constexpr double PI = acos(-1);
constexpr ll MOD = 1e9 + 7;
constexpr ll INF = 1e18;

int main()
{
    tst
    {
        int n;
        cin >> n;

        vi v(n);
        for (auto &it : v)
            cin >> it;

        sort(v.begin(), v.end());
        bool possible = true;

        for (int i = 1; i < v.size(); i++)
        {
            if (v[i] - v[i - 1] > 1)
            {
                possible = false;
                break;
            }
        }

        if (possible)
            yes;
        else
            no;
    }

    return 0;
}