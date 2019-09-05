//  https://codeforces.com/contest/1203/problem/B
//     Equal Rectangles



#include<bits/stdc++.h>
using namespace std ;
#define Fors(n) for(int i=1;i<=n;i++)
#define For(n) for(i=0;i<n;i++)
#define ll long long
#define vint(s) vector<int> s
#define pb(x)  push_back(x)
#define mpair(x,y) make_pair(x,y)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll x=0,y=0,n=0,i=0;

int main(){
    IOS;
    cin >> x;
    while (x--){
    	cin >> n;
    	ll a[(4*n)+1];
    	map<ll,ll> mp;
    	for (i=0;i<(4*n);i++){
    		cin >> a[i];
    		mp[a[i]]++;
    	}
    	ll flag = 0;
    	for (auto it = mp.begin(); it!=mp.end(); it++){
    		ll d = it->second;
    		if (d%2!=0){
    			flag = 1;
    		}
    	}
    	sort(a,a+(4*n));
    	set<ll> s;
    	i = 0;
    	ll j = ((4*n)-1);
    	while (i<j){
    		ll d = (a[i]*a[j]);
    		s.insert(d);
    		i++;
    		j--;
    	}
    	if (s.size()>1 || flag == 1){
    		cout<<"NO\n";
    	}
    	else{
    		cout<<"YES\n";
    	}
    }
    return 0;
}
