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
    	if(arr[i]==1)
    	{
    		p=1;
    		break;
    	}
    }
    if(p==1)
    {
    	cout<<"HARD";
    }
    else
    {
    	cout<<"EASY";
    }
    return 0;
}