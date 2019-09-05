//        https://codeforces.com/problemset/problem/1146/B
//             HATE "A"


#include<bits/stdc++.h>
using namespace std ;
int main(){
	string s;
	cin>>s;
	int n,l,i,j,k=0;
	string s1="",s2="";
	l=s.length();
	j=0;

	for(i=0;i<l;i++){
		char ch = s[i] ;
		//s1+=ch;
		if(s[i]!='a'){
			s2+=ch;
		}
		//string s3 = s1+s2;
		if(s2==s.substr(i+1,l)){
			cout<<s.substr(0,i+1)<<endl;
			return 0;
		}
	}
	cout<<":("<<endl;
	return 0;


}
