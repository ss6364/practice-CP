//  https://codeforces.com/contest/545/problem/C
//  woodcutter

#include<bits/stdc++.h>
using namespace std ;
#define ll long long
#define pb(x) push_back(x)

int main(){
	ll n=0,i,j;
	vector<pair<int,int>> v;
	cin>>n;
	v.clear();
	ll k=0,occ=0;
	while(k!=n){
		k++;
		int a,b;
		cin>>a>>b;
		auto d = make_pair(a,b);
		v.pb(d);
	}
	if(n<2){
		cout<<1;return 0;
	}
	ll ans=1;
	auto c = v.begin();
	occ = c->first;
	for(auto it=v.begin()+1;it!=v.end()-1;it++){
		if( (it->first - it->second) > occ){
			ans++;
			occ = it->first;
		}
		else if( (it->first + it->second) < (it+1)->first){
			ans++;
			occ = (it->first + it->second);
		}
		//cout<<it->first<<" :: "<<occ<<" -> "<<ans<<endl;
		if(occ<(it->first))occ = it->first;
	}
	ans++;
	cout<<ans;
	return 0;
}
