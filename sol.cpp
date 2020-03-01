#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= a; i--)
#define mp make_pair
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
#define lli long long int
#define pii pair<int, int>
#define vii vector<pii>
#define pb push_back
#define eb emplace_back
#define em emplace
#define all(v) v.begin(), v.end()
#define mod 1000000007
#define vi vector<int>
#define vl vector<lli>
#define vll vector<pair<lli, lli>>
#define pll pair<lli, lli>
#define vvi vector<vector<int>>
#define vvl vector<vector<lli>>
#define error(args...)                           \
	{                                            \
		string _s = #args;                       \
		replace(_s.begin(), _s.end(), ',', ' '); \
		stringstream _ss(_s);                    \
		istream_iterator<string> _it(_ss);       \
		err(_it, args);                          \
	}
#define tk(args...) take(args);
#define posLSB(X) __builtin_ctz(X)
#define num1bit(X) __builtin_popcount(X)
#define numlead0(X) __builtin_clz(X)
void err(istream_iterator<string> it)
{
}
template <typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args)
{
	cout << *it << " = " << a << "\n";
	err(++it, args...);
}
void take() {}
template <typename T, typename... Args>
void take(T &a, Args &... args)
{
	cin >> a;
	take(args...);
}
 
#define endl "\n"
 
lli power_mod(lli a, lli x)
{
	if (x == 0)
		return 1;
	lli y = power_mod(a, x / 2);
	lli ans = (y * y) % mod;
	if (x % 2)
		ans = (ans * a) % mod;
	return ans;
}
lli inv(lli a) { return power_mod(a, mod - 2); }
lli power(lli a, lli x)
{
	if (x == 0)
		return 1;
	lli y = power(a, x / 2);
	lli ans = (y * y);
	if (x % 2)
		ans *= a;
	return ans;
}
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, i, tax[11], tax1;
	cin >> t;
	while (t--) {
		cin >> n;
		tax[0] = 0 * 12500;
		tax[1] = 1 * 12500;
		tax[2] = 2 * 12500;
		tax[3] = 3 * 12500;
		tax[4] = 4 * 12500;
		tax[5] = 5 * 12500;
		if (n <= 250000) {
			tax1 = 0;
		}
		else if (n <= 500000) {
			tax1 = tax[0] + (((n - 250000) * 5) / 100);
		}
		else if (n <= 750000) {
			tax1 = tax[0] + tax[1] + (((n - 500000) * 10) / 100);
		}
		else if (n <= 1000000) {
			tax1 = tax[0] + tax[1] + tax[2] + (((n - 750000) * 15) / 100);
		}
		else if (n <= 1250000) {
			tax1 = tax[0] + tax[1] + tax[2] + tax[3] + (((n - 1000000) * 20) / 100);
		}
		else if (n <= 1500000) {
			tax1 = tax[0] + tax[1] + tax[2] + tax[3] + tax[4] + (((n - 1250000) * 25) / 100);
		}
		else {
			tax1 = tax[0] + tax[1] + tax[2] + tax[3] + tax[4] + tax[5] + (((n - 1500000) * 30) / 100);
		}
		cout << n - tax1 << endl;
	}
    return 0;
}