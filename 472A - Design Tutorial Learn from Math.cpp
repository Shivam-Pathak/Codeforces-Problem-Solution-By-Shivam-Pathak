#include<bits/stdc++.h>
#include<string>
#include<cctype>
#include<cmath>
#define ll long long
using namespace std;
int main()
{	

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r",stdin);
	    freopen("output.txt", "w",stdout);
    #endif
    int n;
    cin >> n;
    if (n % 2 == 0) {
        cout << n - 4 << " 4";
    } else {
        cout << n - 9 << " 9";
    }
    return 0;
}
