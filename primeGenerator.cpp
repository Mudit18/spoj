#include <iostream>
#include <bits/stdc++.h>

using namespace::std;

int main(){
	int t;
	cin>>t;
	map<long long int , int > pr;
	list<long long int> l;
	while(t){
		t--;
		long long int n,m;
		cin>>m>>n;
		pr.insert( pair<long long int ,int > (1,1) );
		for(long long int i=2;i<=sqrt(n);i++){
			if(pr.count(i)==0){
				long long int j=i;
				while(j<=sqrt(n)){
					j+=i;
					//cout<<j<<endl;
					if(pr.count(j)==0){
						//cout<<j<<endl;
						pr.insert( pair<long long int ,int > (j,1) );	
					}
				}
			}
		}
		l.clear();
		for(long long int k=2;k<=sqrt(n);k++){
			if(pr[k]!=1){
				l.push_back(k);
			}
		}
		for(long long int i=m;i<=n;i++){
			int flag=0;
			long long int k;
			for (list<long long int>::iterator it=l.begin(); it != l.end(); ++it){
				k=*it;
				if(k>sqrt(i)){
					break;
				}
				if(i%k==0){
					flag=1;
					break;
				}
			}
			if(flag==0 && i!=1){
				cout<<i<<endl;
			}
		}
		cout<<endl;
	}
}