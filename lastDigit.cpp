#include<iostream>

#include<bits/stdc++.h>

using namespace::std;

int main(){
	int t;
	cin>>t;
	while(t){
		t--;
		int a;
		long long int b;
		cin>>a>>b;
		if(a==0){
			cout<<0<<endl;
			continue;
		}
		if(b==0){
			cout<<1<<endl;
			continue;
		}
		map<int,int> m,reverse_m;
		int t=a;
		int k=1;
		while(1){
			if(m.count(t%10)!=0){
				break;
			}
			//cout<<t%10;
			m.insert(pair<int,int> (t%10,k) ); 
			reverse_m.insert(pair<int,int> (k++,t%10) ); 
			t=(t*a)%10;
		}
		int size=0;
		for(int i=0;i<10;i++){
			if(m.count(i)!=0){
				size++;
			}
		}
		long long int x=b%size;
		if(x==0){
			cout<<reverse_m[size]<<endl;
		}else{
			cout<<reverse_m[x]<<endl;
		}
	}
	return 0;
}