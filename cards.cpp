#include <iostream>
#include <bits/stdc++.h>

using namespace::std;

#define lli long long int

lli crd[1000001]={0};

int main(){
	lli t;
	cin>>t;
	crd[1]=2;
	for(lli i=2;i<=1000000;i++){
		crd[i]=(crd[i-1]%1000007+(3*i-1)%1000007)%1000007;
	}
	while(t--){
		lli n;
		cin>>n;
		cout<<crd[n]<<endl;
	}
	return 0;
}