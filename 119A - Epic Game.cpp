#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r",stdin);
	    freopen("output.txt", "w",stdout);
    #endif
    char s[100];
    int i;
    scanf("%s",s);
    for(i=0;i<strlen(s);i++){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}