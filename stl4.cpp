#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>f(n);
        for(int i=0;i<n;i++)
        cin>>f[i];
        vector<int>nut(n);
        for(int i=0;i<n;i++)
        cin>>nut[i];
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            if(m.find(f[i])==m.end())
            m[f[i]]=nut[i];
            else{
                if(m[f[i]]<nut[i])
                m[f[i]]=nut[i];
            }
        }
        long long maxi=INT_MIN;
        vector<int>ans;
        for(auto it:m)
        ans.push_back(it.second);
        long long sum=0;
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            if(ans[i]>0)
            sum+=ans[i];
        }
            
       cout<<sum<<endl; 
    }
	// your code goes here
	return 0;
}
