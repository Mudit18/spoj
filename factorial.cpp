#include <iostream>

#include <bits/stdc++.h>

using namespace::std;

int main(){
	long long int t;
	cin>>t;
	while(t){
		t--;
		long long int n;
		cin>>n;
		long long int lg=log(n)/log(5);
		long long int sum=0;
		for(long long int i=1;i<=lg;i++){
			sum+=(n/(pow(5,i)));
		}
		cout<<sum<<endl;
	}
	return 0;
}