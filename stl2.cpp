#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0;
    int p;
    map<int,int>mp;
    cin>>n;
   // cin>>c;
    int c=INT_MIN;
    //cin>>c;
    for(int i=1;i<=n;i++)
        cin>>p,mp[p]++;
    for(auto i: mp)
    {
        c=max(c,i.second);
    }
    cout<<c<<endl;
    return 0;
}
