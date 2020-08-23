#include<bits/stdc++.h>
#include<string>
using namespace std;
int i, t = 0, n, a;
int main()
{	

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r",stdin);
	    freopen("output.txt", "w",stdout);
    #endif
    int min, max;
    cin >> n >> a;
    min = a;
    max = a;
    for (i = 1; i < n; i++) {
        cin >> a;
        if (a > max) {
            max = a;
            t++;
        }else if (a < min) {
            min = a;
            t++;
        }
    }
    cout << t << endl;
}
