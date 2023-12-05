#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int x,y,z;
    cin>>x>>y>>z;
    map<int,int>mp;
    for(int i=0;i<(x+y+z);i++)
    {
        int m;
        cin>>m;
        mp[m]++;
    }
    vector<int>m;
    for(auto i:mp){
    {
        if(i.second>=2)
        m.push_back(i.first);
    }
}
  cout<<m.size()<<endl;
for(int i=0;i<m.size();i++)
{
    cout<<m[i]<<endl;
}
	// your code goes here
	return 0;
}
/*
5 6 5
23
30
42
57
90
21 
23 
35 
57 
90 
92 
21 
23 
30 
57 
90 

output--
5
21 
23 
30 
57 
90
*/
