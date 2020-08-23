#include<bits/stdc++.h>
#include<string>
#define ll long long
using namespace std;

int main()
{	

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r",stdin);
	    freopen("output.txt", "w",stdout);
    #endif
	int k, r, h = 1, i = 0, j = 1;
	bool b = true;
	int main() {
    cin >> k >> r;
    while (b) {
        i++;
        h = k * i;
        if (h % 10 == 0 || h % 10 == r) {
            b = false;
        }
    }
	cout << i;
    return 0;
}
