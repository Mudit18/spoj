#include <iostream>
#include <bits/stdc++.h>

using namespace::std;

int main(){
	long long int n;
	cin>>n;
	while(n!=-1){
		int a[n];
		long long int sum=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		if(sum%n!=0){
			cout<<"-1"<<endl;
			cin>>n;
			continue;
		}
		int avg=sum/n;
		sum=0;
		for(int i=0;i<n;i++){
			if(a[i]>=avg){
				sum+=(a[i]-avg);
			}else{
				sum+=(avg-a[i]);
			}
		}
		cout<<sum/2<<endl;
		cin>>n;
	}
	return 0;
}