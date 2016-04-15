#include <iostream>
#include <bits/stdc++.h>

using namespace::std;

int main(){
	long long int t;
	cin>>t;
	while(t){
		t--;
		int n;
		cin>>n;
		int men[n],women[n];
		for(int i=0;i<n;i++){
			cin>>men[i];
		}
		for(int i=0;i<n;i++){
			cin>>women[i];
		}
		sort(men,men+n);
		sort(women,women+n);
		long long int sum=0;
		for(int i=0;i<n;i++){
			sum+=(men[i]*women[i]);
		}
		cout<<sum<<endl;
	}
	return 0;
}