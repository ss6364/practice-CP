// https://codeforces.com/contest/1206/problem/A
//    Choose Two Numbers

#include<bits/stdc++.h>
using namespace std ;
#define Fors(n) for(int i=1;i<=n;i++)
#define For(n) for(i=0;i<n;i++)
#define ll long long
#define vint(s) vector<int> s
#define pb(x)  push_back(x)
#define mpair(x,y) make_pair(x,y)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
ll x=0,y=0,s=0,n=0,i=0;
 
int main(){
    IOS;
    cin >>n;
    ll a[n];
    map <ll,ll> mp;
    for (i=0;i<n;i++){
    	cin >> a[i];
    	mp[a[i]] = 1;
    }
    ll m=0;
    cin >> m;
    ll b[m+1];
    for(i=0;i<m;i++){
    	cin >> b[i];
    	mp[b[i]] = 1;
    }
    for (i=0;i<n;i++){
    	for (ll j=0;j<m;j++){
    		ll c = a[i] + b[j];
    		if (mp[c] != 1){
    			cout << a[i] <<" "<< b[j] << endl;
    			return 0;
    		}
    	}
    }


    return 0;
}
