#include <iostream>

#include <bits/stdc++.h>

using namespace::std;

#define lli long long int

int main(){

	lli n;
	cin>>n;
	while(n!=0){
		lli a[n+1];
		for(lli i=1;i<=n;i++){
			cin>>a[i];
		}
		int flag=1;
		for(lli i=1;i<=n;i++){
			if(a[a[i]]!=i){
				flag=0;
				break;
			}
		}
		if(flag==1){
			cout<<"ambiguous"<<endl;
		}else{
			cout<<"not ambiguous"<<endl;
		}
		cin>>n;
	}

	return 0;
}