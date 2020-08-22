#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r",stdin);
        freopen("output.txt", "w",stdout);
    #endif
    int a,b,count=0;
    cin>>a>>b;
    while(a<=b)
    {
        a=3*a;
        b=2*b;
        count++;
    }
    cout<<count;
    return 0;
}