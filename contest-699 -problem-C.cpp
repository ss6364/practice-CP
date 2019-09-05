//    https://codeforces.com/contest/699/problem/C
 //   VACATIONS



#include<bits/stdc++.h>
using namespace std;
int a[103],dp[102][3];



int main(){
	int n,i;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	dp[0][0]=0;
	dp[0][1]=0;
	dp[0][2]=0;
	int x = 0;
	for(i=1;i<=n;i++){

		dp[i][0]=max(x,dp[i][0]);
		if(a[i]!=0)x=0;
		if(a[i]==1 || a[i]==3){
			dp[i][1] = max(dp[i-1][0]+1,dp[i-1][2]+1);
			x = max(dp[i][1],x);
		}
		if(a[i]==3 || a[i]==2){
			dp[i][2] = max(dp[i-1][0]+1,dp[i-1][1]+1);
			x = max(dp[i][2],x);
		}

	}
	dp[n][2] = max(x,dp[n][2]);
	for(i=0;i<=n;i++){
		for(int j=0;j<3;j++){
			//cout<<dp[i][j]<<" ";
		}
		//cout<<endl;
	}
	cout<<n-dp[n][2];
	return 0;
}
