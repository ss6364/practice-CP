//   https://codeforces.com/contest/1148/problem/B
//   Born this way


#include<bits/stdc++.h>
using namespace std ;
#define Fors(n) for(int i=1;i<=n;i++)
#define For(n) for(i=0;i<n;i++)
#define ll long long
#define vint(s) vector<int> s
#define pb(x)  push_back(x)
#define mpair(x,y) make_pair(x,y)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll s=0,n=0,i=0;

int main(){
    IOS;
    ll m,ta=0,tb=0,k=0;

    cin>>n>>m>>ta>>tb>>k;
    //ll x=1e9+2;
    vector<ll> a;
    vector<ll> b;
    //int c[x];

   // memset(c,0,sizeof(0));
    for(i=0;i<n;i++){
    	cin>>s;
    	s+=ta;
    	a.pb(s);
    }
    ll j=0;
    for(i=0;i<m;i++){
    	cin>>s;
    	if(s>=a[j]){
    		b.pb(s);
    		j++;
    	}
    }


    if(a.size()<=k || b.size()<=k ){
    	cout<<"-1";
    	return 0;

    }

    s=0;

    s = max(s,(b[k]+tb));
    //s = max(s,(a[0]+b[k]+tb));
    cout<<s;
    /*
    for(auto i:a){
    	cout<<i<<" :: ";
    }
    cout<<endl;
    for(auto i:b){
    	cout<<i<<" :: ";
    }
    cout<<endl;


    while(k--){
    	i++;
    	s = max(s,(a[i]+b[i]+tb));
    	k--;

    }

    cout<<s<<endl;
    */

    return 0;
}
