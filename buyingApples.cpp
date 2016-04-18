#include <iostream>

#include <bits/stdc++.h>

using namespace::std;

int price[101]={0};
int a[101];

int calculatePrice(int k){
	int mini;
	for(int i=1;i<=k;i++){
		mini=a[i];
		for(int j=1;j<i;j++){
			if(price[i-j]!=-1 && price[j]!=-1)
				if(mini!=-1)
					mini=min(mini,price[i-j] + price[j]);
				else
					mini=price[i-j] + price[j];
		}
		price[i]=mini;
	}
	return price[k];
}

int main(){
	long long int c;
	cin>>c;
	while(c){
		c--;
		int n,k;
		cin>>n>>k;
		for(int i=1;i<=k;i++){
			cin>>a[i];
		}
		cout<<calculatePrice(k);
	}
	return 0;
}