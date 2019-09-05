//  https://codeforces.com/contest/1199/problem/C
//  MP#

#include<bits/stdc++.h>
using namespace std ;
#define Fors(n) for(int i=1;i<=n;i++)
#define For(n) for(i=0;i<n;i++)
#define ll long long
#define vint(s) vector<int> s
#define pb(x)  push_back(x)
#define mpair(x,y) make_pair(x,y)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool compare(std::pair<long long, ll> i, pair<ll, ll> j) {
  return i.second > j.second;
}


ll x=0,y=0,n=0,i=0;

int main(){
    IOS;
    ll I;
    // inputs n & I n -->  the length of the array
    //    I --> the size of the disk in bytes
    cin >> n >> I;
    I *= 8;  // bytes --> bits
    map<ll, ll> mp;
    set<ll> s;
    ll a[n+1];
    ll k = (I/n );

    ll K = 1;    // number of digits I can accomodate

    if (k > 28){
    	K = (1<<28);
    }
    else{
    	K = (1<<k);
    }

    //cout << K;
    // Loop 0 - (n-1)
    For (n){
    	cin >> a[i];
    	mp[a[i]]++;  // map <ll, ll>
    	s.insert(a[i]); // s is set<long long>
    }

    // Logic  if the given space is greater than current distinct integers
    // then no element need to be change hence answer = 0;
    if (s.size() <= K){
    	cout << "0" << endl;
    	return 0;
    }
    s.clear();
    vector <pair <ll, ll>> v; // vector pair

    // below loop only pshes the map mp's values in vector
    // v.push_back({map.key,map.value})
    ll pre[n+2];
    pre[0] = 0;
    ll l = 1;
    for (auto it = mp.begin();it!=mp.end();it++){
    	ll f,ss;
    	f = it->first ;
    	ss = it->second ;
    	pre[i] = pre[i-1]+ss;
    	l++;
    }
    ll ans = 0;
    //  we sort vector so according to their second values of pair
    // so that elemnt has maximum number of occurence come first

    //sort(v.begin(),v.end(),compare);

    // In the below loop all we do is to count occurences of
    //  the elemnts we can accomodate
    // we can only accomodate maxium K distinct numbers

    for (i = 0; i < l-K; i++){
    	ans = max(ans,pre[i+K]-pre[i])
    }
    // answer is the numer of elemnts need to be changed is n-ans
    cout << abs(n-ans) << endl;
    return 0;
}
