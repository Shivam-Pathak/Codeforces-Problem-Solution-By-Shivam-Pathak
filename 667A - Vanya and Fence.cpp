#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r",stdin);
        freopen("output.txt", "w",stdout);
    #endif
    int n,h,width=0;
    cin>>n>>h;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }  
    for(int j=0;j<n;j++)
    {
        if(arr[j]>h)
        {
            width+=2;
        }
        else if(arr[j]<=h)
        {
            width++;
        }
    }
    cout<<width;
    return 0;
}