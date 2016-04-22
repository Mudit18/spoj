#include<iostream>

#include<bits/stdc++.h>

using namespace::std;
long long int v[1000001]={0};

long long int value(long long int n){
	if(n>1000000){
		long long int x1=value(n/2);
		long long int x2=value(n/3);
		long long int x3=value(n/4);
		return max(n,x1+x2+x3);
	}else{
		if(n==0){
			return 0;
		}
		if(v[n]==0){
			long long int x1=value(n/2);
			long long int x2=value(n/3);
			long long int x3=value(n/4);
			v[n]=max(n,x1+x2+x3);
			return v[n];
		}else{
			return v[n];
		}
	}
}

int main(){
	v[0]=0;
	v[1]=1;
	v[2]=2;
	v[3]=3;
	v[4]=4;
	long long int t=10;
	long long int n;
	while(t-- && cin>>n){
		cout<<value(n)<<endl;
	}
	return 0;
}