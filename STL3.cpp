#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n-1);
        for(int i=0;i<n-1;i++){
            cin>>a[i];
        }
        vector<int>vis(n+1,0);
        int main=n;
        vector<int>ans(n,0);
        int s=0;
        for(int i=0;i<n;i++)
        {
            ans[i]=main;
            vis[main]=1;
            while(i+1)<a && main!=a[s];
            vis[a[s]]=1;
            s++;
            i++;
        }
        s++;
        while(main>0 && vis[main])
        {
            main--;
        }
    }
    long long int ans2=0;
    for(int i=0;i<n;i++){
        ans2+=max(1LL*ans[i],1LL*i+1);
    }
    cout<<ans2<<endl;
    n--;
	// your code goes here
	return 0;
}
//ODI CRICKET
