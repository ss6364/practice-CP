// https://codeforces.com/problemset/problem/998/B
// Cutting  #DP

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
    cin >> n >> x;
    ll a[n];
    vint(v);
    For(n){
    	cin>>a[i];
    }
    For((n-1)){
    	if (a[i]%2==0){
    		y++;
    	}
    	else{
    		y--;
    	}
    	if (y == 0){
    		int d = abs(a[i+1] - a[i]);
    		v.pb(d);
    	}
    }
    ll ans = 0,c = 0;
    sort(v.begin(),v.end());
    for (auto it = v.begin(); it != v.end(); it++){
    	ans += (*it);
    	if (ans <= x){
    		c++;
    	}
    }

    cout << c << endl;

    return 0;
}
