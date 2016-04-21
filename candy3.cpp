#include<iostream>
#include<bits/stdc++.h>

using namespace::std;

int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		long long int count=0;
		for(long long int i=0;i<n;i++){
			long long int x;
			cin>>x;
			count=(count+(x%n))%n;
		}
		if(count==0){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}