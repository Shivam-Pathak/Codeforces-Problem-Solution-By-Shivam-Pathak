#include<bits/stdc++.h>
#include<string>
#define ll long long
using namespace std;
int main()
{	

	#ifndef ONLINE_JUDGE
	    freopen("input.txt","r",stdin);
	    freopen("output.txt","w",stdout);
    #endif
        int n,sum=0;
        cin>>n;
        string s;
        for(int i=1;i<=n;i++)
        {
            cin>>s;
            if(s == "Tetrahedron")
            {
                sum+=4;
            }
            else if(s == "Cube")
            {
                sum+=6;
            }
            else if(s == "Octahedron")
            {
                sum+=8;
            }
            else if(s == "Dodecahedron")
            {
                sum += 12;
            }
            else if(s=="Icosahedron")
            {
                sum += 20;
            }
        }
        cout<<sum;
        return 0;
}