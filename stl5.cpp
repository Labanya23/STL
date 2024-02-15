#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    map<char,int>m;
	    for(auto i:s){
	        m[i]++;
	    }
	    int max=0,sum=0;
	    for(auto i:m){
	        if(i.second>max){
	            max=i.second;
	        }
	        sum +=i.second;
	        
	    }
	    if(max==(sum-max)){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}

}
/*input--
4
acab
zzqzqq
abc
kklkwwww

output--
YES
YES
NO
YES
*/


