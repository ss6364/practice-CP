//    https://codeforces.com/contest/1148/problem/A
//    Another One Bites The Dust


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
    ll z=0;
    cin>>x>>y>>z;
    n = (2*z);

    s = (2*min(x,y));

    if(x!=y){
    	s+=1;
    }
    n+=s;
    cout<<n;

    return 0;
}
