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
    ll x,y;
    cin>>x>>y;
    while(y>0)
    {
        if(x%10==0)
        {
            x=x/10;
        }
        else
        {
            --x;
        }
        --y;
    }
    cout<<x;
    return 0;
}
