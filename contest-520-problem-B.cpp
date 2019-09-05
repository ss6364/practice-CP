//  https://codeforces.com/problemset/problem/520/B
//   Two balloons

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
    cin>>n>>x;
    if (x<n){
    	cout<<abs(x-n)<<endl;
    	return 0;
    }
    y = x;
    ll n1 = n;
    ll d=0, d1=0;

    while(n1 < x ){
    	n1<<=1;
    	d1++;

    }
    ll ans = d1 + abs(n1 - x);

    if(n1 == x){
    	cout<<d1<<endl;
    	return 0;
    }
    while(y > n){
    	if(y%2==0)
    		y>>=1;
    	else
    		y++;
    	d++;
    	//cout<<y<< ":|:";
    }
    //cout<<d<<"=d y=";
    y = d + abs(n-y);
    //cout<<y<<endl;

	cout<<min(y,ans)<<endl;

    return 0;
}
