// Registration system
//  https://codeforces.com/problemset/problem/4/C



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
    set<string> st;
    map<string ,int> mp;
    cin>>n;
    x = n;
    vector<string> v;
    while(n--){
        string s;
        cin>>s;
        if(mp.count(s)==0){
            mp[s] = 0;
        }
        st.insert(s);
        v.pb(s);
    }
    n=x;

    for(i=0;i<n;i++){
        if(st.count(v[i])){
            cout<<"OK\n";
            st.erase(v[i]);
            mp[v[i]]=1;
        }
        else{
            cout<<v[i]<<mp[v[i]]<<"\n";
            mp[v[i]]++;
        }
    }
    
    return 0;
}
