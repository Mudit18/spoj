#include<iostream>
#include<bits/stdc++.h>

using namespace::std;

#define lli long long int

int main(){
	lli t;
	cin>>t;
	while(t--){
		lli n;
		cin>>n;
		lli k=n;
		if(n==1){
			cout<<"TERM 1 is 1/1"<<endl;
			continue;
		}
		lli a=1,b=1;
		lli flag=0;
		while(n>1){
			if(flag==0){
				b++;
				n--;
				if(n==1){
					break;
				}
				while(b>1){
					b--;
					a++;
					n--;
					if(n==1){
						break;
					}
				}
				if(n==1){
					break;
				}
				flag=1;
			}else{
				a++;
				n--;
				if(n==1){
					break;
				}
				while(a>1){
					b++;
					a--;
					n--;
					if(n==1){
						break;
					}
				}
				if(n==1){
					break;
				}
				flag=0;
			}

		}
		cout<<"TERM "<<k<<" IS "<<a<<"/"<<b<<endl;
	}
	return 0;
}