#include<iostream.h>
#include<bits/stdc++.h>
using namespace std;
map<int,vector<int>>mm;
//using namespace std;
int main()
{
  ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
  int q;
  cin>>q;
  int c=0;
  while(q--)
  {
      int n;
      cin>>n;
      if(n==1)
      {
          int x;
          cin>>x;
          mm[x].push_back(c);
          c++;
      }
      else{
        int x,y;
        cin>>x>>y;
        if(x!=y){
            if(mm[x].size()>mm[y].size());
            swap(mm[x],mm[y]);
            mm[y].insert(mm[y].end(),mm[x].begin(),mm[x].end());
            mm.erase(x);
                
        }
      }
  }
  vector<int>vcc;
  for(auto i:mm){
    for(auto j:i.second){
        v[j]=i.first;
    }
  }
  for(auto i:v){
    cout<<i<<"";
  }
  cout<<'\n';
  return 0;
}
