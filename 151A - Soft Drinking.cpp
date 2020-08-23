#include<bits/stdc++.h>
#include<string>
using namespace std;
int n, k, l, c, d, p, nl, np, mm, ll, pp;
int main()
{	

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r",stdin);
	    freopen("output.txt", "w",stdout);
    #endif
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    mm = (k * l) / nl;
    ll = c * d;
    pp = p / np;
    cout << min(mm, min(ll, pp)) / n;
}
