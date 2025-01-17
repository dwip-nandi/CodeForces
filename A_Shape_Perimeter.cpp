#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,m;
	    cin>>n>>m;
	   ll result=4*(m*n);
	    for(ll i=0;i<n;i++)
	    {
	        ll x,y;
	        cin>>x>>y;
	        if(i==0)
	        {
	            continue;
	        }
	        result-=2*(m-x+m-y);
	    }
	    cout<<result<<endl;
	}
}