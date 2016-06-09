//TTT, TTH, THT, THH, HTT, HTH, HHT and HHH.
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
		cout<<n<<" ";
		string a;
		cin>>a;
		int count[8]={0};
		for(lli i=0;i<38;i++){
			if(a[i]=='H'){
				if(a[i+1]=='H'){
					if(a[i+2]=='H'){
						count[7]++;
					}else{
						count[6]++;
					}
				}else{
					if(a[i+2]=='H'){
						count[5]++;
					}else{
						count[4]++;
					}
				}
			}else{
				if(a[i+1]=='H'){
					if(a[i+2]=='H'){
						count[3]++;
					}else{
						count[2]++;
					}
				}else{
					if(a[i+2]=='H'){
						count[1]++;
					}else{
						count[0]++;
					}
				}
			}
		}
		for(lli i=0;i<8;i++){
			cout<<count[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}