#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define nline "\\n"
#define M 10000000007
#define int long long
#define float double
#define pilus LONG_LONG_MAX
#define minus LONG_LONG_MIN
#define fi(a, b) for (int i = a; i < b; i++)
#define fij(a, b, c, d) fi(a, b) fj(c, d)
#define fj(a, b) for (int j = a; j < b; j++)
#define fauto(a) for (auto au : a)
#define span(a) begin(a), end(a)
#define despan(a) begin(a), end(a), greater<int>()
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<string> vs;
typedef vector<pair<int, int>> vpii;
typedef pair<int, int> pii;
typedef unordered_set<int> usi;
typedef set<int> si;
typedef map<int, int> mapii;
typedef map<string, int> mapsi;
#define input(vec)       \
    for (auto &el : vec) \
        cin >> el;
#define print(vec)       \
    for (auto &el : vec) \
        cout << el << " ";
/*-----------------------------------------------------------------------*/
#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif
template <typename T>
void _print(T t)
{
    cerr << t;
}
template <typename T, typename P>
void _print(pair<T, P> v)
{
    cerr << "{";
    _print(v.first);
    cerr << ",";
    _print(v.second);
    cerr << "}";
}
template <typename T>
void _print(vector<T> v)
{
    cerr << "[ ";
    fauto(v)
    {
        _print(au);
        cerr << ",";
    }
    cerr << " ]";
}
template <typename T>
void _print(set<T> v)
{
    cerr << "[ ";
    fauto(v)
    {
        _print(au);
        cerr << ",";
    }
    cerr << " ]";
}
template <typename T>
void _print(unordered_set<T> v)
{
    cerr << "[ ";
    fauto(v)
    {
        _print(au);
        cerr << ",";
    }
    cerr << " ]";
}
template <typename T, typename V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i.first);
        cerr << "=>";
        _print(i.second);
        cerr << ",\n     ";
    }
    cerr << " ]";
}
int binpow(int a, int b, int mod)
{
    int res = 1;
    while (b != 0)
    {
        if (1 & b)
            res = (res * a) % mod;
        b >>= 1;
        a = (a * a) % mod;
    }
    return res;
}
int mminvprime(int a, int b) { return binpow(a, b - 2, b); }
int mod_add(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}
int mod_mul(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}
int mod_sub(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}
int mod_div(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (mod_mul(a, mminvprime(b, m), m) + m) % m;
}
int combination(int n, int r, int m, int *fact)
{
    int val1 = fact[n];
    int val2 = mod_mul(fact[n - r], fact[r], m);
    return mod_mul(val1, binpow(val2, m - 2, m), m);
}
/*---------------------------------------------------------------------*/
void solve()
{
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("err.txt", "w", stderr);
#endif
    cin.tie(NULL);
    cout.tie(NULL);
    int tt = 1;
    cin >> tt;
    while (tt--)
    {
        solve();
        cout << nline;
    }
    return 0;
}