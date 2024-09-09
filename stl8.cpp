#include<bits/stdc++.h>
using namespace std;
int main(){


 vector<int>vec;
 int n,k;
 cin>>n>>k;
 for(int i=0;i<n;i++){

    int x;
    cin>>x;
    vec.push_back(x);
 }
 while(k--)
 {

     if(vec.size()<=1)
        break;
     int sum=vec.front()+vec.back();
     vec.erase(vec.begin());
     vec.erase(vec.end()-1);
     vec.push_back(sum);
 }
 for(int i:vec){
    cout<<i<<" ";
 }
 cout<<endl;
 return 0;

}


/////////////////////////////////////////////////////////

int n.x;
cin>>n>>x;
int a,i,mini,maxi;
multiset<int>v;
for(i=0;i<n;i++){
    cin>>a;
    v.insert(a);
}
for(int i=0;i<x;i++){
    mini=*v.begin();
    maxi=*prev(v.end());
    v.erase(v.begin());
    v.insert(prev(v.end()));
    n-=1;
}
for(auto it:v){
    cout<<it<<" ";
}
cout<<endl;
