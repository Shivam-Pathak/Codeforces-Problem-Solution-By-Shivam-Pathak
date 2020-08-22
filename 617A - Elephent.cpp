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
    long long n,count=0;
    cin>>n;
    int i=5;
    while(i>0)
    {
        if(n>=i)
        {
            n-=i;
            count++;
        }
        else
        {
            i--;
        }
    }
    cout<<count;
    return 0;
}
