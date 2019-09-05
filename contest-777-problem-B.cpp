// https://codeforces.com/problemset/problem/777/B
//  Game of Credit Cards

#include<bits/stdc++.h>
using namespace std ;
#define Fors(n) for(int i=1;i<=n;i++)
#define For(n) for(i=0;i<n;i++)
#define ll long long
#define vint(s) vector<int> s
#define pb(x)  push_back(x)
#define mpair(x,y) make_pair(x,y)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll x=0,n=0,i=0;

int main(){
    IOS;
    cin>>n;
    string s,s1;
    cin>>s;
    cin>>s1;
    sort(s.begin(),s.end());
    sort(s1.begin(),s1.end());

    ll j=0,i=0, y=0;
    while (i<n){
    	if(s[j] <= s1[i]){
    		i++ ;
    		j++ ;
    		y++;
    	}
    	else{
    		i++;
    	}
    }

    cout<<(n-y)<<"\n"; // minimum number of flicks moriarty will get


    // 123
    // 123

    j=0,i=0, y=0;
    while (i<n){
    	if(s[j] < s1[i]){
    		i++ ;
    		j++ ;
    		y++;
    	}
    	else{
    		i++;
    	}
    }

    cout<<y;
    return 0;
}
