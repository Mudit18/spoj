#include <iostream>

#include <bits/stdc++.h>

using namespace::std;

#define lli long long int

int main(){
	lli n;
	cin>>n;
	while(n!=0){
		lli a[n];
		for(lli i=0;i<n;i++){
			cin>>a[i];
		}
		lli k=1;
		stack<lli> s;
		int flag=1;
		for(lli i=0;i<n;i++){
			if(a[i]!=k){
				if(!s.empty() && s.top()!=k)
					s.push(a[i]);
				else if(!s.empty()){
					s.pop();
					k++;
					i--;
				}else{
					s.push(a[i]);
				}
			}else{
				k++;
			}
		}
		while(!s.empty()){
			lli m=s.top();
			s.pop();
			if(m==k){
				k++;
			}else{
				break;
			}
		}
		if(k<n){
			cout<<"no"<<endl;
		}else{
			cout<<"yes"<<endl;
		}
		cin>>n;
	}
	return 0;
}