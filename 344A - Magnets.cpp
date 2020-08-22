#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r",stdin);
        freopen("output.txt", "w",stdout);
    #endif
    int n,p=0;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
    	cin>>arr[i];
    }
    for(int j=1;j<=n;j++)
    {
        if(arr[j]!=arr[j+1])
        {
            p++;
        }
    }
    cout<<p;
    return 0;
}