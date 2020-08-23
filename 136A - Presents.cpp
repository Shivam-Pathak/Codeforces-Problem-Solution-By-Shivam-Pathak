#include<bits/stdc++.h>
#include<string>
#define ll long long
using namespace std;
int n, b, mas[105];
int main()
{	

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r",stdin);
	    freopen("output.txt", "w",stdout);
    #endif
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> b;
        mas[b] = i;
    }
    for (int i = 1; i <= n; i++) {
        cout << mas[i] << " ";
    }
}
