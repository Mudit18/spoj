#include<iostream>
#include<bits/stdc++.h>

using namespace::std;

#define lli long long int

int main(){
	lli b,n;
	cin>>b>>n;
	while(b!=0 && n!=0){
		lli a[n+1][2];
		for(lli i=1;i<=n;i++){
			cin>>a[i][0]>>a[i][1];
		}

		lli dp[b+1][n+1];
		dp[0][0]=0;
		for(lli i=1;i<=n;i++){
			dp[0][i]=0;
		}
		for(lli i=1;i<=b;i++){
			dp[i][0]=0;
		}
		for(lli i=1;i<=b;i++){
			for(lli j=1;j<=n;j++){
				if(i<a[j][0]){
					dp[i][j]=dp[i][j-1];
				}else{
					dp[i][j]=max(a[j][1]+dp[ i-a[j][0] ][j-1],dp[i][j-1]);
				}
			}
		}
		lli i=b-1;
		while(dp[i][n]==dp[b][n]){
			i--;
		}
		cout<<i+1<<" ";
		cout<<dp[b][n]<<endl;
		cin>>b>>n;
	}

	return 0;
}