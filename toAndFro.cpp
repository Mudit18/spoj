#include <iostream>
#include <bits/stdc++.h>

using namespace::std;

int main(){
	long long int n;
	cin>>n;
	while(n!=0){
		string s;
		cin>>s;
		int l=s.length()/n;
		char v[201][n];
		int j=0;
		int k=0;
		while(j<s.length()){
			for(int i=0;i<n;i++){
				v[k][i]=s[j];
				j++;
			}
			if(k+1>s.length()){
				break;
			}
			k++;
			for(int i=n-1;i>=0;i--){
				v[k][i]=s[j];
				j++;
			}
			k++;
		}
		for(j=0;j<n;j++){
			for(int i=0;i<l;i++){
				cout<<v[i][j];
			}
		}
		cout<<endl;
		cin>>n;
	}
	return 0;
}