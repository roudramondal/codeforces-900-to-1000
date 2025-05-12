/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 05 / 12 / 2025
   Time  : 18:42
   Problem Link: 
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define ld long double
#define pb push_back
#define po pop_back
#define all(v) v.begin(), v.end()
#define F first
#define S second
#define co cout
#define c cin

const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ld PI = acos(-1.0);

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
void solve() {
    // Your code here
    string s;
    c >> s;
    int onecount = 0, zcount = 0;
    for (auto c:s)
    {
      onecount += (c == '1');
      zcount += (c == '0');
    }
    for (int i = 0; i < s.length();i++)
    {
      if (s[i]=='0')
      {
        if (onecount>0)
        {
          onecount--;
        }
        else
        {
          break;
        }
      }
      else
      {
        if (zcount>0)
        {
          zcount--;
        }
        else
        {
          break;
        }
      }
    }
    co << max(onecount, zcount) << nl;
}

int main() {
    fast_io;
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}